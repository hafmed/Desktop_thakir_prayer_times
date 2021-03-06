/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_AboutClass
{
public:
    QLabel *labelIcon;
    QLabel *labelName;
    QPushButton *pushButton_exit_about;
    QTextBrowser *textBrowser_about;
    QTextBrowser *textBrowser_version;

    void setupUi(QDialog *AboutClass)
    {
        if (AboutClass->objectName().isEmpty())
            AboutClass->setObjectName(QString::fromUtf8("AboutClass"));
        AboutClass->resize(240, 320);
        AboutClass->setMinimumSize(QSize(240, 320));
        AboutClass->setMaximumSize(QSize(240, 320));
        AboutClass->setLayoutDirection(Qt::RightToLeft);
        AboutClass->setLocale(QLocale(QLocale::Arabic, QLocale::Algeria));
        labelIcon = new QLabel(AboutClass);
        labelIcon->setObjectName(QString::fromUtf8("labelIcon"));
        labelIcon->setGeometry(QRect(160, 19, 81, 91));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelIcon->sizePolicy().hasHeightForWidth());
        labelIcon->setSizePolicy(sizePolicy);
        labelIcon->setMinimumSize(QSize(0, 0));
        labelIcon->setMaximumSize(QSize(160, 160));
        labelIcon->setPixmap(QPixmap(QString::fromUtf8(":/icons/thakir_prayer_times.ico")));
        labelIcon->setScaledContents(true);
        labelIcon->setWordWrap(false);
        labelIcon->setMargin(10);
        labelIcon->setTextInteractionFlags(Qt::NoTextInteraction);
        labelName = new QLabel(AboutClass);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        labelName->setGeometry(QRect(10, 120, 221, 41));
        pushButton_exit_about = new QPushButton(AboutClass);
        pushButton_exit_about->setObjectName(QString::fromUtf8("pushButton_exit_about"));
        pushButton_exit_about->setGeometry(QRect(90, 283, 61, 31));
        pushButton_exit_about->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_exit_about->setLayoutDirection(Qt::LeftToRight);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_exit_about->setIcon(icon);
        textBrowser_about = new QTextBrowser(AboutClass);
        textBrowser_about->setObjectName(QString::fromUtf8("textBrowser_about"));
        textBrowser_about->setGeometry(QRect(10, 160, 221, 111));
        textBrowser_about->setFrameShape(QFrame::StyledPanel);
        textBrowser_about->setFrameShadow(QFrame::Sunken);
        textBrowser_about->setOpenExternalLinks(true);
        textBrowser_about->setOpenLinks(false);
        textBrowser_version = new QTextBrowser(AboutClass);
        textBrowser_version->setObjectName(QString::fromUtf8("textBrowser_version"));
        textBrowser_version->setGeometry(QRect(10, 10, 151, 111));
        textBrowser_version->setFrameShape(QFrame::StyledPanel);
        textBrowser_version->setFrameShadow(QFrame::Sunken);
        textBrowser_version->setOpenExternalLinks(true);
        textBrowser_version->setOpenLinks(false);

        retranslateUi(AboutClass);
        QObject::connect(pushButton_exit_about, SIGNAL(clicked()), AboutClass, SLOT(close()));

        QMetaObject::connectSlotsByName(AboutClass);
    } // setupUi

    void retranslateUi(QDialog *AboutClass)
    {
        AboutClass->setWindowTitle(QApplication::translate("AboutClass", "\330\255\331\210\331\204 \330\247\331\204\330\250\330\261\331\206\330\247\331\205\330\254", nullptr));
        labelName->setText(QApplication::translate("AboutClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600;\">\330\260\331\203\330\261 \331\204\330\243\331\210\331\202\330\247\330\252 \330\247\331\204\330\265\331\204\330\247\330\251</span></p></body></html>", nullptr));
        pushButton_exit_about->setText(QApplication::translate("AboutClass", "\331\206\330\271\331\205", nullptr));
        textBrowser_about->setHtml(QApplication::translate("AboutClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">\330\247</span><span style=\" font-size:9pt; font-weight:600; color:#00aa00;\">\331\204\331\222\330\255\331\216\331\205\331\222\330\257\331\217 \331\204\331\220\331\204\331\221\331\216\331\207\331\220 \330\247\331\204\331\221\331\216\330\260\331\220\331\212 \331\207\331\216\330\257\331\216\330\247\331\206\331\216\330\247 \331\204\331\220\331\207\331\216\331\260\330\260\331\216\330\247 \331\210\331\216\331\205\331\216\330\247 \331\203\331\217\331\206\331\221\331\216\330\247 \331\204\331\220\331\206\331\216\331"
                        "\207\331\222\330\252\331\216\330\257\331\220\331\212\331\216 \331\204\331\216\331\210\331\222\331\204\331\216\330\247 \330\243\331\216\331\206\331\222 \331\207\331\216\330\257\331\216\330\247\331\206\331\216\330\247 \330\247\331\204\331\204\331\221\331\216\331\207\331\217</span><span style=\" font-size:7pt; font-weight:600; color:#00aa00;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; color:#00aa00;\">----------------------</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#000000;\">\331\207\330\260\330\247 \330\247\331\204\330\250\330\261\331\206\330\247\331\205\330\254 \331\205\331\206 \330\252\330\265\331\205\331\212\331\205</span><span style=\" font-size:8pt; color:#5bb14e;\"> : </span><span style=\" font-size:8pt; color:#529f46;\""
                        ">\331\205\330\255\331\205\330\257</span><span style=\" font-size:8pt; color:#5bb14e;\"> </span><span style=\" font-size:8pt; color:#529f46;\">\330\255\331\201\331\212\330\247\331\206 </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; color:#5bb14e;\">(\330\247\331\204\330\254\330\262\330\247\330\246\330\261)</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"thakir.dz@gmail.com\"><span style=\" font-size:8pt; text-decoration: underline; color:#0000ff;\">thakir.dz@gmail.com</span></a></p>\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-righ"
                        "t:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\331\207\330\260\330\247 \330\247\331\204\330\250\330\261\331\206\330\247\331\205\330\254 \331\212\331\210\330\262\330\271 \331\205\330\254\330\247\331\206\330\247 \331\201\331\212 \330\243\331\205\331\204 \330\243\331\206 \331\212\331\203\331\210\331\206 \331\206\330\247\331\201\330\271\330\247 \330\250\330\245\330\260\331\206 \330\247\331\204\331\204\331\207</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\331\204\331\203\331\206\331\207 \330\272\331\212\330\261 \331\205\330\265\330\255\331\210\330\250 \330\250\330\243\331\212\330\251 \330\266\331\205\330\247\331\206\330\251\330\214 </span><span style=\" font-size:8pt; text-decoration: underline; color:#43ca4c;\">\331\204\330\247 \330\252\331\206\330\263\331\210\331\206\330\247 \331\205\331\206 \330\265\330\247\331\204\330\255 \330\257\330\271\330\247"
                        "\330\246\331\203\331\205</span></p>\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; -qt-user-state:0;\"><span style=\" font-size:8pt;\">\330\245\330\260\330\247 \331\203\330\247\331\206 \330\243\331\212 \330\247\330\256\330\252\331\204\330\247\331\201 \331\201\331\212 \330\243\331\210\331\202\330\247\330\252 \330\247\331\204\330\265\331\204\330\247\330\251 \331\205\331\202\330\247\330\261\331\206\330\251 \331\205\330\271 \330\243\330\260\330\247\331\206 \330\243\331\202\330\261\330\250 \331\205\330\263\330\254\330\257 \331\212\330\261\330\254\331\211 \330\247\331\204\330\247\330\252\330\265\330\247\331\204 \330\250\331\212 \331\201\331\212 \330\247\331\204\330\250\330\261\331\212\330\257 \330\247\331\204\330\245\331\204\331\203\330\252"
                        "\330\261\331\210\331\206\331\212 \331\204\331\203\331\212 \330\243\330\265\330\255\330\255 \330\247\331\204\330\256\330\267\330\243 \330\250\330\245\330\260\331\206 \330\247\331\204\331\204\331\207</span></p>\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\252\330\261\331\202\330\250\331\210\330\247 \331\205\331\212\330\262\330\247\330\252 \330\254\330\257\331\212\330\257\330\251 \331\201\331\212 \330\247\331\204\330\245\330\265\330\257\330\247\330\261 \330\247\331\204\331\205\331\202\330\250\331\204 \331\204\331\204\330\250\330\261\331\206\330\247\331\205\330\254 \330\250\330\245\330\260\331\206 \330\247\331\204\331\204\331\207 </span></p>\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empt"
                        "y; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">    \330\243\331\212 \330\256\330\267\330\243 \331\201\331\212 \330\247\331\204\330\250\330\261\331\206\330\247\331\205\330\254 (\330\250\357\255\252) \331\205\331\206 \331\201\330\266\331\204\331\203\331\205  \330\245\330\252\330\265\331\204\331\210\330\247  \330\250\331\212 \331\201\331\212 \330\247\331\204\330\250\330\261\331\212\330\257 \330\247\331\204\330\245\331\204\331\203\330\252\330\261\331\210\331\206\331\212 \330\247\331\204\331\205\331\210\330\254\331\210\330\257 \331\201\331\212 \330\247\331\204\330\243\330\271\331\204\331\211</span></p></body></html>", nullptr));
        textBrowser_version->setHtml(QApplication::translate("AboutClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutClass: public Ui_AboutClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
