#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <opencv2/core/core.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <QDir>
#include <QFileDialog>
#include <QDateTime>
#include <baseapi.h>
#include <allheaders.h>
#include <QMessageBox>
#include <QTextEdit>
#include <QtGui>
#include <report.h>
#include <QFile>
#include <QDateTime>

using namespace std;
using namespace cv;
using namespace  tesseract;

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    
private:
    Ui::Dialog *ui;
    report *myreport;

    string fileName;
    cv::Rect bound;
        Mat frame1;
        Mat frame2;
        Mat imROI1;
        Mat imROI2;
        cv::Mat imggray;
        cv::Mat imggray2;
        cv::Mat imggray1;
        int Pixels ;
        int threshold;
        int flag;
        int timeresult;
        cv::Mat img;
        cv::Mat bcg;
        cv::Mat draw;
        cv::Mat images [15];
        std::vector<vector<Point> > contours,contours1,contours2;
        std::vector<Vec4i> hierarchy;
        int size, k, l, cpt;  Mat test;
        QString c;
        QString filerecord;

        int motioncount, picount, stringcount;
        cv::Mat tresh;




cv::VideoCapture input;
QImage Video;
QImage PImage;
QTimer* tmrTimer;
QTimer* videoTimer;
QDateTime dateTime;
QDate date;
QTime time;
QTime timediff;
QString dateTimeString;
QMessageBox msgBox;



public slots:

private slots:


    void processFrameAndUpdateGUI();
    void on_loadfile_clicked();
    void on_stop_clicked();
    void on_loadcamera_clicked();
    void on_btnResume_clicked();
    void on_btnPause_clicked();
    void on_exit_clicked();
    void on_viewreport_clicked();
};

#endif // DIALOG_H
