#ifndef REPORT_H
#define REPORT_H


#include <QDialog>
#include <QDir>
#include <QFileDialog>
#include <QDateTime>
#include <QMessageBox>
#include <QTextEdit>
#include <QtGui>

namespace Ui {
class report;
}

class report : public QDialog
{
    Q_OBJECT
    
public:
    explicit report(QWidget *parent = 0);
    ~report();
    
private slots:

    void on_pushButton_clicked();

    void on_close_clicked();


private:
    Ui::report *ui;

    QTextDocument *editor;

};

#endif // REPORT_H
