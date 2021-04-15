/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *actionNew;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionAbout;
    QAction *actionFont;
    QAction *actionUnderline;
    QAction *actionBold;
    QAction *actionItalic;
    QAction *actionOpen;
    QAction *actionBackground;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuFormat;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName(QString::fromUtf8("Notepad"));
        Notepad->resize(627, 350);
        actionNew = new QAction(Notepad);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionSave = new QAction(Notepad);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rec/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionSave_As = new QAction(Notepad);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rec/icons/save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon2);
        actionPrint = new QAction(Notepad);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rec/icons/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon3);
        actionExit = new QAction(Notepad);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionCopy = new QAction(Notepad);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/rec/icons/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon4);
        actionCut = new QAction(Notepad);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/rec/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon5);
        actionPaste = new QAction(Notepad);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/rec/icons/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon6);
        actionUndo = new QAction(Notepad);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/rec/icons/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon7);
        actionRedo = new QAction(Notepad);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/rec/icons/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon8);
        actionAbout = new QAction(Notepad);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/rec/icons/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon9);
        actionFont = new QAction(Notepad);
        actionFont->setObjectName(QString::fromUtf8("actionFont"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/rec/icons/fonts.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon10);
        actionUnderline = new QAction(Notepad);
        actionUnderline->setObjectName(QString::fromUtf8("actionUnderline"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/rec/icons/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon11);
        actionBold = new QAction(Notepad);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/rec/icons/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon12);
        actionItalic = new QAction(Notepad);
        actionItalic->setObjectName(QString::fromUtf8("actionItalic"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/rec/icons/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon13);
        actionOpen = new QAction(Notepad);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/rec/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon14);
        actionBackground = new QAction(Notepad);
        actionBackground->setObjectName(QString::fromUtf8("actionBackground"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/rec/icons/background.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBackground->setIcon(icon15);
        centralwidget = new QWidget(Notepad);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        Notepad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Notepad);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 627, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuFormat = new QMenu(menubar);
        menuFormat->setObjectName(QString::fromUtf8("menuFormat"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        Notepad->setMenuBar(menubar);
        statusbar = new QStatusBar(Notepad);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Notepad->setStatusBar(statusbar);
        toolBar = new QToolBar(Notepad);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Notepad->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuFormat->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionExit);
        menuFile->addSeparator();
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuFormat->addAction(actionFont);
        menuFormat->addAction(actionUnderline);
        menuFormat->addAction(actionBold);
        menuFormat->addAction(actionItalic);
        menuFormat->addAction(actionBackground);
        menuAbout->addAction(actionAbout);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSave_As);
        toolBar->addAction(actionPrint);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionCut);
        toolBar->addAction(actionPaste);
        toolBar->addAction(actionRedo);
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionFont);
        toolBar->addAction(actionBold);
        toolBar->addAction(actionItalic);
        toolBar->addAction(actionUnderline);
        toolBar->addAction(actionBackground);
        toolBar->addAction(actionAbout);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QCoreApplication::translate("Notepad", "Notepad", nullptr));
        actionNew->setText(QCoreApplication::translate("Notepad", "New", nullptr));
        actionSave->setText(QCoreApplication::translate("Notepad", "Save", nullptr));
        actionSave_As->setText(QCoreApplication::translate("Notepad", "Save As", nullptr));
        actionPrint->setText(QCoreApplication::translate("Notepad", "Print", nullptr));
        actionExit->setText(QCoreApplication::translate("Notepad", "Exit", nullptr));
        actionCopy->setText(QCoreApplication::translate("Notepad", "Copy", nullptr));
        actionCut->setText(QCoreApplication::translate("Notepad", "Cut", nullptr));
        actionPaste->setText(QCoreApplication::translate("Notepad", "Paste", nullptr));
        actionUndo->setText(QCoreApplication::translate("Notepad", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("Notepad", "Redo", nullptr));
        actionAbout->setText(QCoreApplication::translate("Notepad", "About", nullptr));
        actionFont->setText(QCoreApplication::translate("Notepad", "Font", nullptr));
        actionUnderline->setText(QCoreApplication::translate("Notepad", "Underline", nullptr));
        actionBold->setText(QCoreApplication::translate("Notepad", "Bold", nullptr));
        actionItalic->setText(QCoreApplication::translate("Notepad", "Italic", nullptr));
        actionOpen->setText(QCoreApplication::translate("Notepad", "Open", nullptr));
        actionBackground->setText(QCoreApplication::translate("Notepad", "Background", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Notepad", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Notepad", "Edit", nullptr));
        menuFormat->setTitle(QCoreApplication::translate("Notepad", "Format", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("Notepad", "About", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Notepad", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
