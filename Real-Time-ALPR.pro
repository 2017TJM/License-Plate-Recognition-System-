#-------------------------------------------------
#
# Project created by QtCreator 2013-06-24T10:18:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QT += printsupport


TARGET = Real-Time-ALPR
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    report.cpp

HEADERS  += dialog.h \
    report.h

FORMS    += dialog.ui \
    report.ui

INCLUDEPATH += "C:\Program Files (x86)\Tesseract-OCR\include"
INCLUDEPATH += "C:\Program Files (x86)\Tesseract-OCR\include\leptonica"
INCLUDEPATH += "C:\ProgramFiles(x86)\Tesseract-OCR\include\tesseract"

INCLUDEPATH += "C:\Program Files (x86)\Tesseract-OCR\tesseract-ocr\api"
INCLUDEPATH += "C:\Program Files (x86)\Tesseract-OCR\tesseract-ocr\ccmain"
INCLUDEPATH += "C:\Program Files (x86)\Tesseract-OCR\tesseract-ocr\ccstruct"
INCLUDEPATH += "C:\Program Files (x86)\Tesseract-OCR\tesseract-ocr\ccutil"

INCLUDEPATH += "C:\opencv243\build\include"

LIBS += -LC:\opencv243\\build\\x86\\vc10\\lib \
-lopencv_calib3d243d \
-lopencv_contrib243d \
-lopencv_core243d \
-lopencv_features2d243\
-lopencv_flann243d \
-lopencv_gpu243d \
-lopencv_haartraining_engined \
-lopencv_highgui243d \
-lopencv_imgproc243d \
-lopencv_legacy243d \
-lopencv_ml243d \
-lopencv_nonfree243d \
-lopencv_objdetect243d \
-lopencv_photo243d \
-lopencv_stitching243d \
-lopencv_ts243d \
-lopencv_video243d \
-lopencv_videostab243d \



LIBS += -L"C:/Program Files (x86)/Tesseract-OCR/lib" -llibtesseract302
LIBS += -L"C:/Program Files (x86)/Tesseract-OCR/lib" -llibtesseract302d

LIBS += -L"C:/Program Files (x86)/Tesseract-OCR/lib" -lliblept168
LIBS += -L"C:/Program Files (x86)/Tesseract-OCR/lib" -lliblept168d

