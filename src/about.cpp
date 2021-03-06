/*
HAFIANE Mohamed
*/

#include "about.h"
#include "constants.h"
#include <QDialog>


About::About(QWidget *parent)
    : QDialog(parent)
{
    ui.setupUi(this);
    ui.textBrowser_version->setHtml(tr("<html>"
            "<head>"
              "<meta name=\"qrichtext\" content=\"1\" />"
              "<style type=\"text/css\">\np, li { white-space: pre-wrap; }</style>"
            "</head>"
            "<body style=\"font-family:'Sans Serif'; font-size:7pt; font-weight:200; font-style:normal;\">"
              "<p style=\"margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">"
                "Version: %1<br/>"
                "This application is written entirely in C++ using the "
                "open source Qt libaries version: %2<br/>"
                "Compiler: %3<br/>"
                "Build date: %4<br/>"
                "Build time: %5"
              "</p>"
            "</body>"
            "</html>").arg(APP_VERSION, QT_VERSION_STR, CMP_VERSION, BLD_DATE, BLD_TIME));
}
