/********************************************************************************
** Form generated from reading UI file 'report.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_H
#define UI_REPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_report
{
public:
    QPlainTextEdit *txtreport;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *close;

    void setupUi(QWidget *report)
    {
        if (report->objectName().isEmpty())
            report->setObjectName(QStringLiteral("report"));
        report->resize(302, 332);
        txtreport = new QPlainTextEdit(report);
        txtreport->setObjectName(QStringLiteral("txtreport"));
        txtreport->setGeometry(QRect(20, 60, 261, 201));
        txtreport->setReadOnly(true);
        pushButton = new QPushButton(report);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 280, 111, 31));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(12);
        pushButton->setFont(font);
        label = new QLabel(report);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 271, 31));
        label->setFont(font);
        close = new QPushButton(report);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(170, 280, 111, 31));
        close->setFont(font);

        retranslateUi(report);

        QMetaObject::connectSlotsByName(report);
    } // setupUi

    void retranslateUi(QWidget *report)
    {
        report->setWindowTitle(QApplication::translate("report", "REPORT", 0));
        pushButton->setText(QApplication::translate("report", "PRINT", 0));
        label->setText(QApplication::translate("report", "LICENSE PLATE CAPTURE RECORDS", 0));
        close->setText(QApplication::translate("report", "CLOSE", 0));
    } // retranslateUi

};

namespace Ui {
    class report: public Ui_report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_H
