#include "report.h"
#include "ui_report.h"

report::report(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::report)
{
    ui->setupUi(this);


editor = new QTextDocument(this);
QString fileName = "ALPRS_RECORDS.txt";
QFile file(fileName);
            if (!file.open(QIODevice::ReadOnly)) {
                QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
                return;
            }
            QTextStream in(&file);
            ui->txtreport->appendPlainText(in.readAll());
            editor= ui->txtreport->document();
            file.close();


 }

report::~report()
{
    delete ui;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////


void report::on_pushButton_clicked()
{
 //  QPrinter printer;
//
  //      QPrintDialog *dialog = new QPrintDialog(&printer, this);
    //    dialog->setWindowTitle(tr("Print Document"));

      //  if (dialog->exec() != QDialog::Accepted)
        //    return;
        //editor->print(&printer);


}

void report::on_close_clicked()
{
    close();
}

