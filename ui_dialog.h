/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *Voutput;
    QPushButton *btnResume;
    QLabel *IPoutput;
    QPushButton *loadfile;
    QPushButton *stop;
    QPushButton *loadcamera;
    QPushButton *btnPause;
    QLabel *outputdate;
    QLabel *outputtime;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *viewreport;
    QPushButton *exit;
    QLabel *txtcharoutput;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_6;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1340, 680);
        Voutput = new QLabel(Dialog);
        Voutput->setObjectName(QStringLiteral("Voutput"));
        Voutput->setGeometry(QRect(20, 40, 800, 600));
        Voutput->setAutoFillBackground(false);
        Voutput->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        btnResume = new QPushButton(Dialog);
        btnResume->setObjectName(QStringLiteral("btnResume"));
        btnResume->setEnabled(false);
        btnResume->setGeometry(QRect(1000, 210, 150, 31));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(12);
        btnResume->setFont(font);
        btnResume->setDefault(false);
        btnResume->setFlat(false);
        IPoutput = new QLabel(Dialog);
        IPoutput->setObjectName(QStringLiteral("IPoutput"));
        IPoutput->setGeometry(QRect(1010, 370, 321, 50));
        IPoutput->setAutoFillBackground(true);
        loadfile = new QPushButton(Dialog);
        loadfile->setObjectName(QStringLiteral("loadfile"));
        loadfile->setGeometry(QRect(1100, 70, 220, 31));
        loadfile->setFont(font);
        stop = new QPushButton(Dialog);
        stop->setObjectName(QStringLiteral("stop"));
        stop->setEnabled(false);
        stop->setGeometry(QRect(1170, 210, 150, 31));
        stop->setFont(font);
        loadcamera = new QPushButton(Dialog);
        loadcamera->setObjectName(QStringLiteral("loadcamera"));
        loadcamera->setGeometry(QRect(830, 70, 220, 31));
        loadcamera->setFont(font);
        btnPause = new QPushButton(Dialog);
        btnPause->setObjectName(QStringLiteral("btnPause"));
        btnPause->setEnabled(false);
        btnPause->setGeometry(QRect(830, 210, 150, 31));
        btnPause->setFont(font);
        btnPause->setDefault(false);
        btnPause->setFlat(false);
        outputdate = new QLabel(Dialog);
        outputdate->setObjectName(QStringLiteral("outputdate"));
        outputdate->setGeometry(QRect(960, 300, 150, 31));
        outputdate->setFont(font);
        outputdate->setAutoFillBackground(true);
        outputtime = new QLabel(Dialog);
        outputtime->setObjectName(QStringLiteral("outputtime"));
        outputtime->setGeometry(QRect(1120, 300, 150, 31));
        outputtime->setFont(font);
        outputtime->setAutoFillBackground(true);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1000, 20, 151, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(12);
        font1.setUnderline(true);
        label->setFont(font1);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(970, 160, 211, 31));
        label_2->setFont(font1);
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(830, 300, 101, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(830, 380, 171, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(830, 460, 231, 31));
        label_5->setFont(font1);
        viewreport = new QPushButton(Dialog);
        viewreport->setObjectName(QStringLiteral("viewreport"));
        viewreport->setEnabled(true);
        viewreport->setGeometry(QRect(880, 600, 201, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        viewreport->setFont(font2);
        exit = new QPushButton(Dialog);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(1120, 600, 201, 61));
        exit->setFont(font2);
        txtcharoutput = new QLabel(Dialog);
        txtcharoutput->setObjectName(QStringLiteral("txtcharoutput"));
        txtcharoutput->setGeometry(QRect(1070, 450, 201, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Times New Roman"));
        font3.setPointSize(24);
        font3.setBold(true);
        font3.setWeight(75);
        txtcharoutput->setFont(font3);
        txtcharoutput->setAutoFillBackground(true);
        plainTextEdit = new QPlainTextEdit(Dialog);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(910, 520, 261, 61));
        plainTextEdit->setReadOnly(true);
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(830, 540, 81, 31));
        label_6->setFont(font1);

        retranslateUi(Dialog);
        QObject::connect(stop, SIGNAL(clicked()), Voutput, SLOT(clear()));
        QObject::connect(stop, SIGNAL(clicked()), outputdate, SLOT(clear()));
        QObject::connect(stop, SIGNAL(clicked()), outputtime, SLOT(clear()));
        QObject::connect(stop, SIGNAL(clicked()), IPoutput, SLOT(clear()));
        QObject::connect(stop, SIGNAL(clicked()), txtcharoutput, SLOT(clear()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "AUTOMATIC LICENSE PLATE RECOGNITION SYSTEM", 0));
        Voutput->setText(QString());
        btnResume->setText(QApplication::translate("Dialog", "RESUME", 0));
        IPoutput->setText(QString());
        loadfile->setText(QApplication::translate("Dialog", "LOAD  VIDEO  FILE", 0));
        stop->setText(QApplication::translate("Dialog", "STOP", 0));
        loadcamera->setText(QApplication::translate("Dialog", "LOAD  CAMERA", 0));
        btnPause->setText(QApplication::translate("Dialog", "PAUSE", 0));
        outputdate->setText(QString());
        outputtime->setText(QString());
        label->setText(QApplication::translate("Dialog", "INPUT CONTOLLERS", 0));
        label_2->setText(QApplication::translate("Dialog", "VIDEO INPUT CONTOLLERS", 0));
        label_3->setText(QApplication::translate("Dialog", "DATE & TIME", 0));
        label_4->setText(QApplication::translate("Dialog", "LICENSE PLATE IMAGE", 0));
        label_5->setText(QApplication::translate("Dialog", "LICENSE PLATE CHARACTERS", 0));
        viewreport->setText(QApplication::translate("Dialog", "  REPORT", 0));
        exit->setText(QApplication::translate("Dialog", "EXIT", 0));
        txtcharoutput->setText(QString());
        label_6->setText(QApplication::translate("Dialog", "RECORD", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
