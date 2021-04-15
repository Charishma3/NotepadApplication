#include "notepad.h"
#include "ui_notepad.h"
#include<QFileDialog>
#include<QMessageBox>
#include<QTextStream>
#include<QFontDialog>
#include<QtPrintSupport/QPrinter>
#include<QtPrintSupport/QPrintDialog>
#include<QColor>
#include<QColorDialog>

Notepad::Notepad(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Notepad)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
    connect(ui->actionNew,&QAction::triggered,this, &Notepad::newDocument);
    connect(ui->actionOpen, &QAction::triggered, this ,&Notepad::open);
     connect(ui->actionSave, &QAction::triggered, this ,&Notepad::save);
     connect(ui->actionPrint, &QAction::triggered, this ,&Notepad::print);
     connect(ui->actionCopy, &QAction::triggered, this ,&Notepad::copy);
     connect(ui->actionPaste, &QAction::triggered, this ,&Notepad::paste);
     connect(ui->actionUndo, &QAction::triggered, this ,&Notepad::undo);
     connect(ui->actionPaste, &QAction::triggered, this ,&Notepad::redo);
     connect(ui->actionFont, &QAction::triggered, this ,&Notepad::font);
     connect(ui->actionBold, &QAction::triggered, this ,&Notepad::setFontBold);
     connect(ui->actionUnderline, &QAction::triggered, this ,&Notepad::setFontUnderline);
     connect(ui->actionItalic, &QAction::triggered, this ,&Notepad::setFontItalic);
     connect(ui->actionBackground, &QAction::triggered, this ,&Notepad::setBackground);
     connect(ui->actionAbout, &QAction::triggered, this ,&Notepad::about);
}

Notepad::~Notepad()
{
    delete ui;
}

void Notepad::newDocument()
{
   currentFile.clear();
   ui->textEdit->setText(QString());
}

void Notepad::open()
{
   QString fileName = QFileDialog::getOpenFileName(this,"Open the file");
   QFile file(fileName);
  currentFile = fileName;
  if(!file.open(QIODevice::ReadOnly | QFile::Text))
  {
      QMessageBox::warning(this, "Warning","Cant't open this file:" + file.errorString());
       return;
  }
  setWindowTitle(fileName);
  QTextStream in(&file);
  QString text= in.readAll();
  ui->textEdit->setText(text);
  file.close();

}

void Notepad::save()
{
    QString fileName;
    if(currentFile.isEmpty())
    {
        fileName = QFileDialog::getSaveFileName(this, "Save");
        currentFile = fileName;
    }
    else{
        fileName =currentFile;
    }

    QFile file(fileName);

    if(!file.open(QIODevice::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Warning" , "Cannot save file: " + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream out(&file);

    QString text = ui->textEdit->toPlainText();
    out<<text;
    file.close();

}

void Notepad::saveAs()
{
     QString fileName = QFileDialog::getSaveFileName(this,"Save as");
     QFile file(fileName);

     if(!file.open(QIODevice::WriteOnly | QFile::Text))
     {
         QMessageBox::warning(this, "Warning" , "Cannot save file: " + file.errorString());
         return;
     }
     currentFile = fileName;

     setWindowTitle(fileName);
     QTextStream out(&file);

     QString text = ui->textEdit->toPlainText();
     out<<text;
     file.close();
}

void Notepad::print()
{
#if defined(QT_PRINTSUPPORT_LIB) && QT_CONFIG(printer)
    QPrinter printerDev;
#if QT_CONFIG(printdialog)
    QPrintDialog dialog(&printDev, this);
    if(dialog.exec() == QDialog::Rejected)
        return;
#endif
    ui->textEdit->print(&printDev);
#endif
}

void Notepad::exit()
{
    QCoreApplication::quit();
}

void Notepad::copy()
{
#if QT_CONFIG(clipboard)
    ui->textEdit->copy();
#endif
}

void Notepad::cut()
{
#if QT_CONFIG(clipboard)
    ui->textEdit->cut();
#endif
}

void Notepad::paste()
{
#if QT_CONFIG(clipboard)
    ui->textEdit->paste();
#endif
}

void Notepad::undo()
{
    ui->textEdit->undo();
}

void Notepad::redo()
{
      ui->textEdit->redo();
}

void Notepad::selectFont()
{
    bool fontSelected;
    QFont font = QFontDialog::getFont(&fontSelected, this);
    if(fontSelected)
      ui->textEdit->setFont(font);
}

void Notepad::setFontBold(bool bold)
{
     ui->textEdit->setFontWeight(QFont::Bold);
}

void Notepad::setFontUnderline(bool underline)
{
    ui->textEdit->setFontUnderline(true);
}

void Notepad::setFontItalic(bool italic)
{
    ui->textEdit->setFontItalic(true);

}
void Notepad::setBackground()
{
    QColor color = QColorDialog::getColor(Qt::white,this,"Choose Color");
    if(color.isValid()) {
         ui->textEdit->setTextBackgroundColor(color);
         }
}

void Notepad::about()
{
    QMessageBox::about(this, tr("About MDI"), tr("The <b>Notepad</b> example "
"demonstrates how to code a basic text editor using QTWidgets"));
}


void Notepad::on_actionNew_triggered()
{
    currentFile.clear();
    ui->textEdit->setText(QString());

}

void Notepad::on_actionOpen_triggered()
{

}


