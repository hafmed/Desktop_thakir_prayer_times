/********************************************************************************
** Form generated from reading UI file 'thakir_prayer_times.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THAKIR_PRAYER_TIMES_H
#define UI_THAKIR_PRAYER_TIMES_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDial>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_thakir_prayer_times_HAF
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget_Athan;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_sansATHAN;
    QRadioButton *radioButton_Athan_Makka;
    QRadioButton *radioButton_Athan_Maddina;
    QRadioButton *radioButton_Athan_Aquassa;
    QRadioButton *radioButton_Athan_Algeria;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_sansALERTE;
    QRadioButton *radioButton_Alerte_Avant;
    QSpinBox *spinBox_Temps_Alerte_Avant;
    QWidget *tab;
    QToolBox *toolBox;
    QWidget *page_1;
    QLineEdit *lineEdit_degreeLat;
    QLabel *label_16;
    QLabel *label_17;
    QLineEdit *lineEdit_seaLevel;
    QLineEdit *lineEdit_name_madina;
    QLabel *label_19;
    QComboBox *comboBox_madina;
    QLineEdit *lineEdit_degreeLong;
    QLabel *label_20;
    QComboBox *comboBox_madina_comune;
    QLabel *label;
    QLabel *label_15;
    QGroupBox *radioButton_sitting_HAF;
    QGroupBox *radioButton_sitting_user;
    QWidget *page_2;
    QLineEdit *lineEdit_gmtDiff_monde;
    QLineEdit *lineEdit_degreeLat_monde;
    QLabel *label_21;
    QLineEdit *lineEdit_degreeLong_monde;
    QLineEdit *lineEdit_seaLevel_monde;
    QLineEdit *lineEdit_name_madina_monde;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QComboBox *comboBox_Method_monde;
    QLabel *label_26;
    QCheckBox *checkBox_Heure_ete;
    QRadioButton *radioButton_sitting_Algerie;
    QRadioButton *radioButton_sitting_monde;
    QWidget *Tab_Prayer_Times;
    QTimeEdit *timeEdit_fadjra;
    QLabel *label_3;
    QLabel *label_4;
    QTimeEdit *timeEdit_chork;
    QLabel *label_5;
    QTimeEdit *timeEdit_thohor;
    QLabel *label_6;
    QTimeEdit *timeEdit_asar;
    QLabel *label_7;
    QTimeEdit *timeEdit_maghrab;
    QLabel *label_8;
    QTimeEdit *timeEdit_icha;
    QTimeEdit *timeEdit_imsak;
    QLabel *label_10;
    QTimeEdit *timeEdit_imsak_tomorow;
    QLabel *label_12;
    QTimeEdit *timeEdit_fadjra_tomorow;
    QLabel *label_13;
    QProgressBar *progressBar_temps_restant;
    QLabel *label_temps_restant;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_oldsalat;
    QSpacerItem *horizontalSpacer;
    QLabel *label_nextsalat;
    QTimeEdit *timeEdit_pour_attendre_nextsalat;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_entete;
    QWidget *Tab_Kibla;
    QLabel *label_madina_name;
    QLabel *label_madina_long;
    QLabel *label_madina_latitu;
    QLabel *label_quibla_info;
    QDial *dial_Direction_Quibla;
    QLabel *label_11;
    QLabel *label_2;
    QLabel *label_9;
    QLabel *label_14;
    QLabel *label_elevation;
    QPushButton *pushButton_about;
    QPushButton *pushButton_close;

    void setupUi(QMainWindow *thakir_prayer_times_HAF)
    {
        if (thakir_prayer_times_HAF->objectName().isEmpty())
            thakir_prayer_times_HAF->setObjectName(QString::fromUtf8("thakir_prayer_times_HAF"));
        thakir_prayer_times_HAF->setWindowModality(Qt::NonModal);
        thakir_prayer_times_HAF->resize(240, 345);
        thakir_prayer_times_HAF->setMinimumSize(QSize(240, 345));
        thakir_prayer_times_HAF->setMaximumSize(QSize(240, 375));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        thakir_prayer_times_HAF->setFont(font);
        thakir_prayer_times_HAF->setLayoutDirection(Qt::RightToLeft);
        thakir_prayer_times_HAF->setAutoFillBackground(false);
        thakir_prayer_times_HAF->setLocale(QLocale(QLocale::Arabic, QLocale::Algeria));
        centralwidget = new QWidget(thakir_prayer_times_HAF);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget_Athan = new QTabWidget(centralwidget);
        tabWidget_Athan->setObjectName(QString::fromUtf8("tabWidget_Athan"));
        tabWidget_Athan->setGeometry(QRect(0, 0, 241, 321));
        tabWidget_Athan->setLayoutDirection(Qt::RightToLeft);
        tabWidget_Athan->setLocale(QLocale(QLocale::Arabic, QLocale::Algeria));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 9, 221, 151));
        groupBox->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 201, 146));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_sansATHAN = new QRadioButton(layoutWidget);
        radioButton_sansATHAN->setObjectName(QString::fromUtf8("radioButton_sansATHAN"));

        verticalLayout->addWidget(radioButton_sansATHAN);

        radioButton_Athan_Makka = new QRadioButton(layoutWidget);
        radioButton_Athan_Makka->setObjectName(QString::fromUtf8("radioButton_Athan_Makka"));
        radioButton_Athan_Makka->setChecked(true);

        verticalLayout->addWidget(radioButton_Athan_Makka);

        radioButton_Athan_Maddina = new QRadioButton(layoutWidget);
        radioButton_Athan_Maddina->setObjectName(QString::fromUtf8("radioButton_Athan_Maddina"));

        verticalLayout->addWidget(radioButton_Athan_Maddina);

        radioButton_Athan_Aquassa = new QRadioButton(layoutWidget);
        radioButton_Athan_Aquassa->setObjectName(QString::fromUtf8("radioButton_Athan_Aquassa"));

        verticalLayout->addWidget(radioButton_Athan_Aquassa);

        radioButton_Athan_Algeria = new QRadioButton(layoutWidget);
        radioButton_Athan_Algeria->setObjectName(QString::fromUtf8("radioButton_Athan_Algeria"));

        verticalLayout->addWidget(radioButton_Athan_Algeria);

        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 160, 221, 131));
        groupBox_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 29, 201, 101));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton_sansALERTE = new QRadioButton(layoutWidget1);
        radioButton_sansALERTE->setObjectName(QString::fromUtf8("radioButton_sansALERTE"));

        verticalLayout_2->addWidget(radioButton_sansALERTE);

        radioButton_Alerte_Avant = new QRadioButton(layoutWidget1);
        radioButton_Alerte_Avant->setObjectName(QString::fromUtf8("radioButton_Alerte_Avant"));
        radioButton_Alerte_Avant->setChecked(true);

        verticalLayout_2->addWidget(radioButton_Alerte_Avant);

        spinBox_Temps_Alerte_Avant = new QSpinBox(layoutWidget1);
        spinBox_Temps_Alerte_Avant->setObjectName(QString::fromUtf8("spinBox_Temps_Alerte_Avant"));
        spinBox_Temps_Alerte_Avant->setMinimum(1);
        spinBox_Temps_Alerte_Avant->setMaximum(31);
        spinBox_Temps_Alerte_Avant->setValue(5);

        verticalLayout_2->addWidget(spinBox_Temps_Alerte_Avant);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/warning.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget_Athan->addTab(tab_2, icon, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        toolBox = new QToolBox(tab);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(3, 20, 231, 271));
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        page_1->setGeometry(QRect(0, 0, 231, 207));
        lineEdit_degreeLat = new QLineEdit(page_1);
        lineEdit_degreeLat->setObjectName(QString::fromUtf8("lineEdit_degreeLat"));
        lineEdit_degreeLat->setGeometry(QRect(10, 116, 71, 20));
        lineEdit_degreeLat->setLayoutDirection(Qt::LeftToRight);
        lineEdit_degreeLat->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(page_1);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(110, 94, 111, 20));
        label_17 = new QLabel(page_1);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(110, 116, 111, 20));
        lineEdit_seaLevel = new QLineEdit(page_1);
        lineEdit_seaLevel->setObjectName(QString::fromUtf8("lineEdit_seaLevel"));
        lineEdit_seaLevel->setGeometry(QRect(10, 160, 71, 20));
        lineEdit_seaLevel->setLayoutDirection(Qt::LeftToRight);
        lineEdit_seaLevel->setAlignment(Qt::AlignCenter);
        lineEdit_name_madina = new QLineEdit(page_1);
        lineEdit_name_madina->setObjectName(QString::fromUtf8("lineEdit_name_madina"));
        lineEdit_name_madina->setGeometry(QRect(10, 94, 71, 20));
        lineEdit_name_madina->setAlignment(Qt::AlignCenter);
        label_19 = new QLabel(page_1);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(90, 138, 131, 20));
        comboBox_madina = new QComboBox(page_1);
        comboBox_madina->setObjectName(QString::fromUtf8("comboBox_madina"));
        comboBox_madina->setGeometry(QRect(122, 43, 101, 20));
        lineEdit_degreeLong = new QLineEdit(page_1);
        lineEdit_degreeLong->setObjectName(QString::fromUtf8("lineEdit_degreeLong"));
        lineEdit_degreeLong->setGeometry(QRect(10, 138, 71, 20));
        lineEdit_degreeLong->setLayoutDirection(Qt::LeftToRight);
        lineEdit_degreeLong->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(page_1);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(80, 160, 141, 20));
        comboBox_madina_comune = new QComboBox(page_1);
        comboBox_madina_comune->setObjectName(QString::fromUtf8("comboBox_madina_comune"));
        comboBox_madina_comune->setGeometry(QRect(10, 43, 101, 20));
        label = new QLabel(page_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(141, 24, 81, 16));
        label_15 = new QLabel(page_1);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 23, 101, 20));
        radioButton_sitting_HAF = new QGroupBox(page_1);
        radioButton_sitting_HAF->setObjectName(QString::fromUtf8("radioButton_sitting_HAF"));
        radioButton_sitting_HAF->setGeometry(QRect(0, 1, 231, 71));
        radioButton_sitting_HAF->setCheckable(true);
        radioButton_sitting_user = new QGroupBox(page_1);
        radioButton_sitting_user->setObjectName(QString::fromUtf8("radioButton_sitting_user"));
        radioButton_sitting_user->setGeometry(QRect(0, 75, 231, 110));
        radioButton_sitting_user->setCheckable(true);
        radioButton_sitting_user->setChecked(false);
        toolBox->addItem(page_1, QString::fromUtf8("\330\256\330\247\330\265 \330\250\330\247\331\204\330\254\330\262\330\247\330\246\330\261"));
        radioButton_sitting_user->raise();
        radioButton_sitting_HAF->raise();
        lineEdit_degreeLat->raise();
        label_16->raise();
        label_17->raise();
        lineEdit_seaLevel->raise();
        lineEdit_name_madina->raise();
        label_19->raise();
        comboBox_madina->raise();
        lineEdit_degreeLong->raise();
        label_20->raise();
        comboBox_madina_comune->raise();
        label->raise();
        label_15->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 98, 28));
        lineEdit_gmtDiff_monde = new QLineEdit(page_2);
        lineEdit_gmtDiff_monde->setObjectName(QString::fromUtf8("lineEdit_gmtDiff_monde"));
        lineEdit_gmtDiff_monde->setGeometry(QRect(0, 90, 91, 20));
        lineEdit_gmtDiff_monde->setLayoutDirection(Qt::LeftToRight);
        lineEdit_gmtDiff_monde->setAlignment(Qt::AlignCenter);
        lineEdit_degreeLat_monde = new QLineEdit(page_2);
        lineEdit_degreeLat_monde->setObjectName(QString::fromUtf8("lineEdit_degreeLat_monde"));
        lineEdit_degreeLat_monde->setGeometry(QRect(0, 30, 91, 20));
        lineEdit_degreeLat_monde->setLayoutDirection(Qt::LeftToRight);
        lineEdit_degreeLat_monde->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(page_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(110, 10, 121, 20));
        lineEdit_degreeLong_monde = new QLineEdit(page_2);
        lineEdit_degreeLong_monde->setObjectName(QString::fromUtf8("lineEdit_degreeLong_monde"));
        lineEdit_degreeLong_monde->setGeometry(QRect(0, 50, 91, 20));
        lineEdit_degreeLong_monde->setLayoutDirection(Qt::LeftToRight);
        lineEdit_degreeLong_monde->setAlignment(Qt::AlignCenter);
        lineEdit_seaLevel_monde = new QLineEdit(page_2);
        lineEdit_seaLevel_monde->setObjectName(QString::fromUtf8("lineEdit_seaLevel_monde"));
        lineEdit_seaLevel_monde->setGeometry(QRect(0, 70, 91, 20));
        lineEdit_seaLevel_monde->setLayoutDirection(Qt::LeftToRight);
        lineEdit_seaLevel_monde->setAlignment(Qt::AlignCenter);
        lineEdit_name_madina_monde = new QLineEdit(page_2);
        lineEdit_name_madina_monde->setObjectName(QString::fromUtf8("lineEdit_name_madina_monde"));
        lineEdit_name_madina_monde->setGeometry(QRect(0, 10, 91, 20));
        lineEdit_name_madina_monde->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(page_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(90, 70, 141, 20));
        label_23 = new QLabel(page_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(110, 90, 121, 20));
        label_23->setLayoutDirection(Qt::RightToLeft);
        label_24 = new QLabel(page_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(110, 30, 121, 20));
        label_25 = new QLabel(page_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(110, 50, 121, 20));
        comboBox_Method_monde = new QComboBox(page_2);
        comboBox_Method_monde->addItem(QString());
        comboBox_Method_monde->addItem(QString());
        comboBox_Method_monde->addItem(QString());
        comboBox_Method_monde->addItem(QString());
        comboBox_Method_monde->addItem(QString());
        comboBox_Method_monde->addItem(QString());
        comboBox_Method_monde->addItem(QString());
        comboBox_Method_monde->addItem(QString());
        comboBox_Method_monde->setObjectName(QString::fromUtf8("comboBox_Method_monde"));
        comboBox_Method_monde->setGeometry(QRect(0, 160, 231, 20));
        comboBox_Method_monde->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        label_26 = new QLabel(page_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(20, 137, 211, 20));
        checkBox_Heure_ete = new QCheckBox(page_2);
        checkBox_Heure_ete->setObjectName(QString::fromUtf8("checkBox_Heure_ete"));
        checkBox_Heure_ete->setGeometry(QRect(20, 114, 211, 20));
        toolBox->addItem(page_2, QString::fromUtf8("\330\257\331\210\331\204 \330\247\331\204\330\271\330\247\331\204\331\205 \330\247\331\204\330\243\330\256\330\261\331\211"));
        radioButton_sitting_Algerie = new QRadioButton(tab);
        radioButton_sitting_Algerie->setObjectName(QString::fromUtf8("radioButton_sitting_Algerie"));
        radioButton_sitting_Algerie->setEnabled(true);
        radioButton_sitting_Algerie->setGeometry(QRect(143, 1, 91, 20));
        radioButton_sitting_Algerie->setChecked(true);
        radioButton_sitting_monde = new QRadioButton(tab);
        radioButton_sitting_monde->setObjectName(QString::fromUtf8("radioButton_sitting_monde"));
        radioButton_sitting_monde->setGeometry(QRect(2, 1, 121, 20));
        radioButton_sitting_monde->setChecked(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget_Athan->addTab(tab, icon1, QString());
        Tab_Prayer_Times = new QWidget();
        Tab_Prayer_Times->setObjectName(QString::fromUtf8("Tab_Prayer_Times"));
        timeEdit_fadjra = new QTimeEdit(Tab_Prayer_Times);
        timeEdit_fadjra->setObjectName(QString::fromUtf8("timeEdit_fadjra"));
        timeEdit_fadjra->setEnabled(true);
        timeEdit_fadjra->setGeometry(QRect(160, 110, 61, 20));
        timeEdit_fadjra->setLayoutDirection(Qt::RightToLeft);
        timeEdit_fadjra->setAlignment(Qt::AlignCenter);
        timeEdit_fadjra->setReadOnly(true);
        timeEdit_fadjra->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeEdit_fadjra->setKeyboardTracking(false);
        timeEdit_fadjra->setTime(QTime(0, 0, 0));
        label_3 = new QLabel(Tab_Prayer_Times);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 90, 61, 20));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(Tab_Prayer_Times);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 90, 61, 20));
        label_4->setAlignment(Qt::AlignCenter);
        timeEdit_chork = new QTimeEdit(Tab_Prayer_Times);
        timeEdit_chork->setObjectName(QString::fromUtf8("timeEdit_chork"));
        timeEdit_chork->setGeometry(QRect(90, 110, 61, 22));
        timeEdit_chork->setAlignment(Qt::AlignCenter);
        timeEdit_chork->setReadOnly(true);
        timeEdit_chork->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeEdit_chork->setTime(QTime(0, 0, 0));
        label_5 = new QLabel(Tab_Prayer_Times);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 90, 61, 20));
        label_5->setAlignment(Qt::AlignCenter);
        timeEdit_thohor = new QTimeEdit(Tab_Prayer_Times);
        timeEdit_thohor->setObjectName(QString::fromUtf8("timeEdit_thohor"));
        timeEdit_thohor->setGeometry(QRect(20, 110, 61, 22));
        timeEdit_thohor->setAlignment(Qt::AlignCenter);
        timeEdit_thohor->setReadOnly(true);
        timeEdit_thohor->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeEdit_thohor->setTime(QTime(0, 0, 0));
        label_6 = new QLabel(Tab_Prayer_Times);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(160, 140, 61, 20));
        label_6->setAlignment(Qt::AlignCenter);
        timeEdit_asar = new QTimeEdit(Tab_Prayer_Times);
        timeEdit_asar->setObjectName(QString::fromUtf8("timeEdit_asar"));
        timeEdit_asar->setGeometry(QRect(160, 160, 61, 22));
        timeEdit_asar->setAlignment(Qt::AlignCenter);
        timeEdit_asar->setReadOnly(true);
        timeEdit_asar->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeEdit_asar->setTime(QTime(0, 0, 0));
        label_7 = new QLabel(Tab_Prayer_Times);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 140, 61, 20));
        label_7->setAlignment(Qt::AlignCenter);
        timeEdit_maghrab = new QTimeEdit(Tab_Prayer_Times);
        timeEdit_maghrab->setObjectName(QString::fromUtf8("timeEdit_maghrab"));
        timeEdit_maghrab->setGeometry(QRect(90, 160, 61, 22));
        timeEdit_maghrab->setAlignment(Qt::AlignCenter);
        timeEdit_maghrab->setReadOnly(true);
        timeEdit_maghrab->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeEdit_maghrab->setTime(QTime(0, 0, 0));
        label_8 = new QLabel(Tab_Prayer_Times);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 140, 61, 20));
        label_8->setAlignment(Qt::AlignCenter);
        timeEdit_icha = new QTimeEdit(Tab_Prayer_Times);
        timeEdit_icha->setObjectName(QString::fromUtf8("timeEdit_icha"));
        timeEdit_icha->setGeometry(QRect(20, 160, 61, 22));
        timeEdit_icha->setAlignment(Qt::AlignCenter);
        timeEdit_icha->setReadOnly(true);
        timeEdit_icha->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeEdit_icha->setTime(QTime(0, 0, 0));
        timeEdit_imsak = new QTimeEdit(Tab_Prayer_Times);
        timeEdit_imsak->setObjectName(QString::fromUtf8("timeEdit_imsak"));
        timeEdit_imsak->setGeometry(QRect(160, 270, 61, 22));
        timeEdit_imsak->setAlignment(Qt::AlignCenter);
        timeEdit_imsak->setReadOnly(true);
        timeEdit_imsak->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeEdit_imsak->setTime(QTime(0, 0, 0));
        label_10 = new QLabel(Tab_Prayer_Times);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(160, 250, 61, 20));
        label_10->setAlignment(Qt::AlignCenter);
        timeEdit_imsak_tomorow = new QTimeEdit(Tab_Prayer_Times);
        timeEdit_imsak_tomorow->setObjectName(QString::fromUtf8("timeEdit_imsak_tomorow"));
        timeEdit_imsak_tomorow->setGeometry(QRect(90, 270, 61, 22));
        timeEdit_imsak_tomorow->setAlignment(Qt::AlignCenter);
        timeEdit_imsak_tomorow->setReadOnly(true);
        timeEdit_imsak_tomorow->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeEdit_imsak_tomorow->setTime(QTime(0, 0, 0));
        label_12 = new QLabel(Tab_Prayer_Times);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(90, 250, 61, 20));
        label_12->setAlignment(Qt::AlignCenter);
        timeEdit_fadjra_tomorow = new QTimeEdit(Tab_Prayer_Times);
        timeEdit_fadjra_tomorow->setObjectName(QString::fromUtf8("timeEdit_fadjra_tomorow"));
        timeEdit_fadjra_tomorow->setGeometry(QRect(20, 270, 61, 22));
        timeEdit_fadjra_tomorow->setAlignment(Qt::AlignCenter);
        timeEdit_fadjra_tomorow->setReadOnly(true);
        timeEdit_fadjra_tomorow->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeEdit_fadjra_tomorow->setTime(QTime(0, 0, 0));
        label_13 = new QLabel(Tab_Prayer_Times);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 250, 61, 20));
        label_13->setAlignment(Qt::AlignCenter);
        progressBar_temps_restant = new QProgressBar(Tab_Prayer_Times);
        progressBar_temps_restant->setObjectName(QString::fromUtf8("progressBar_temps_restant"));
        progressBar_temps_restant->setGeometry(QRect(20, 210, 201, 15));
        progressBar_temps_restant->setMinimum(0);
        progressBar_temps_restant->setValue(5);
        progressBar_temps_restant->setTextVisible(false);
        progressBar_temps_restant->setOrientation(Qt::Horizontal);
        progressBar_temps_restant->setInvertedAppearance(false);
        label_temps_restant = new QLabel(Tab_Prayer_Times);
        label_temps_restant->setObjectName(QString::fromUtf8("label_temps_restant"));
        label_temps_restant->setGeometry(QRect(20, 230, 201, 20));
        label_temps_restant->setAlignment(Qt::AlignCenter);
        layoutWidget2 = new QWidget(Tab_Prayer_Times);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 180, 201, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_oldsalat = new QLabel(layoutWidget2);
        label_oldsalat->setObjectName(QString::fromUtf8("label_oldsalat"));

        horizontalLayout_2->addWidget(label_oldsalat);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_nextsalat = new QLabel(layoutWidget2);
        label_nextsalat->setObjectName(QString::fromUtf8("label_nextsalat"));

        horizontalLayout_2->addWidget(label_nextsalat);

        timeEdit_pour_attendre_nextsalat = new QTimeEdit(Tab_Prayer_Times);
        timeEdit_pour_attendre_nextsalat->setObjectName(QString::fromUtf8("timeEdit_pour_attendre_nextsalat"));
        timeEdit_pour_attendre_nextsalat->setGeometry(QRect(76, 250, 81, 20));
        timeEdit_pour_attendre_nextsalat->setAlignment(Qt::AlignCenter);
        timeEdit_pour_attendre_nextsalat->setReadOnly(true);
        timeEdit_pour_attendre_nextsalat->setButtonSymbols(QAbstractSpinBox::NoButtons);
        timeEdit_pour_attendre_nextsalat->setTime(QTime(0, 0, 0));
        dateTimeEdit = new QDateTimeEdit(Tab_Prayer_Times);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(35, 50, 171, 31));
        dateTimeEdit->setAlignment(Qt::AlignCenter);
        dateTimeEdit->setReadOnly(true);
        dateTimeEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        label_entete = new QLabel(Tab_Prayer_Times);
        label_entete->setObjectName(QString::fromUtf8("label_entete"));
        label_entete->setEnabled(true);
        label_entete->setGeometry(QRect(-2, 20, 241, 21));
        label_entete->setAlignment(Qt::AlignCenter);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/Clock.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget_Athan->addTab(Tab_Prayer_Times, icon2, QString());
        Tab_Kibla = new QWidget();
        Tab_Kibla->setObjectName(QString::fromUtf8("Tab_Kibla"));
        label_madina_name = new QLabel(Tab_Kibla);
        label_madina_name->setObjectName(QString::fromUtf8("label_madina_name"));
        label_madina_name->setGeometry(QRect(11, 3, 221, 21));
        label_madina_name->setAlignment(Qt::AlignCenter);
        label_madina_long = new QLabel(Tab_Kibla);
        label_madina_long->setObjectName(QString::fromUtf8("label_madina_long"));
        label_madina_long->setGeometry(QRect(10, 21, 221, 41));
        label_madina_long->setWordWrap(true);
        label_madina_latitu = new QLabel(Tab_Kibla);
        label_madina_latitu->setObjectName(QString::fromUtf8("label_madina_latitu"));
        label_madina_latitu->setGeometry(QRect(10, 42, 221, 41));
        label_madina_latitu->setWordWrap(true);
        label_quibla_info = new QLabel(Tab_Kibla);
        label_quibla_info->setObjectName(QString::fromUtf8("label_quibla_info"));
        label_quibla_info->setGeometry(QRect(7, 91, 221, 45));
        label_quibla_info->setWordWrap(true);
        dial_Direction_Quibla = new QDial(Tab_Kibla);
        dial_Direction_Quibla->setObjectName(QString::fromUtf8("dial_Direction_Quibla"));
        dial_Direction_Quibla->setEnabled(false);
        dial_Direction_Quibla->setGeometry(QRect(74, 160, 100, 89));
        dial_Direction_Quibla->setLayoutDirection(Qt::RightToLeft);
        dial_Direction_Quibla->setMaximum(360);
        dial_Direction_Quibla->setPageStep(90);
        dial_Direction_Quibla->setValue(180);
        dial_Direction_Quibla->setSliderPosition(180);
        dial_Direction_Quibla->setInvertedAppearance(false);
        dial_Direction_Quibla->setInvertedControls(false);
        dial_Direction_Quibla->setWrapping(true);
        dial_Direction_Quibla->setNotchesVisible(true);
        label_11 = new QLabel(Tab_Kibla);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(34, 195, 41, 20));
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_2 = new QLabel(Tab_Kibla);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(174, 195, 31, 16));
        label_2->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(Tab_Kibla);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(110, 142, 31, 16));
        label_9->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(Tab_Kibla);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(110, 244, 31, 20));
        label_14->setAlignment(Qt::AlignCenter);
        label_14->setIndent(0);
        label_elevation = new QLabel(Tab_Kibla);
        label_elevation->setObjectName(QString::fromUtf8("label_elevation"));
        label_elevation->setGeometry(QRect(7, 82, 221, 21));
        label_elevation->setWordWrap(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/ox16-app-kaaba-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget_Athan->addTab(Tab_Kibla, icon3, QString());
        pushButton_about = new QPushButton(centralwidget);
        pushButton_about->setObjectName(QString::fromUtf8("pushButton_about"));
        pushButton_about->setGeometry(QRect(0, 320, 121, 25));
        pushButton_about->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_about->setLayoutDirection(Qt::LeftToRight);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/help-about.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_about->setIcon(icon4);
        pushButton_close = new QPushButton(centralwidget);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setEnabled(true);
        pushButton_close->setGeometry(QRect(119, 320, 121, 25));
        pushButton_close->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_close->setLayoutDirection(Qt::LeftToRight);
        pushButton_close->setAutoFillBackground(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/go-down.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_close->setIcon(icon5);
        pushButton_close->setAutoDefault(false);
        pushButton_close->setFlat(false);
        thakir_prayer_times_HAF->setCentralWidget(centralwidget);

        retranslateUi(thakir_prayer_times_HAF);

        tabWidget_Athan->setCurrentIndex(2);
        toolBox->setCurrentIndex(0);
        pushButton_close->setDefault(false);


        QMetaObject::connectSlotsByName(thakir_prayer_times_HAF);
    } // setupUi

    void retranslateUi(QMainWindow *thakir_prayer_times_HAF)
    {
        thakir_prayer_times_HAF->setWindowTitle(QApplication::translate("thakir_prayer_times_HAF", "\330\260\331\203\330\261 \331\204\330\243\331\210\331\202\330\247\330\252 \330\247\331\204\330\265\331\204\330\247\330\251", nullptr));
        groupBox->setTitle(QApplication::translate("thakir_prayer_times_HAF", "\330\243\330\260\330\247\331\206", nullptr));
        radioButton_sansATHAN->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\250\330\257\331\210\331\206 \330\243\330\260\330\247\331\206", nullptr));
        radioButton_Athan_Makka->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\243\330\260\330\247\331\206 \331\205\331\203\330\251 \330\247\331\204\331\205\331\203\330\261\331\205\330\251", nullptr));
        radioButton_Athan_Maddina->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\243\330\260\330\247\331\206 \330\247\331\204\331\205\330\257\331\212\331\206\330\251 \330\247\331\204\331\205\331\206\331\210\330\261\330\251", nullptr));
        radioButton_Athan_Aquassa->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\243\330\260\330\247\331\206 \331\205\330\263\330\254\330\257 \330\247\331\204\330\243\331\202\330\265\331\211", nullptr));
        radioButton_Athan_Algeria->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\243\330\260\330\247\331\206 \330\247\331\204\330\254\330\262\330\247\330\246\330\261", nullptr));
        groupBox_2->setTitle(QApplication::translate("thakir_prayer_times_HAF", "\330\252\331\206\330\250\331\212\331\207", nullptr));
        radioButton_sansALERTE->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\250\330\257\331\210\331\206 \330\252\331\206\330\250\331\212\331\207", nullptr));
        radioButton_Alerte_Avant->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\252\331\206\330\250\331\212\331\207 \331\202\330\250\331\204 \331\210\331\202\330\252 \330\247\331\204\330\265\331\204\330\247\330\251 \330\250", nullptr));
        spinBox_Temps_Alerte_Avant->setSuffix(QApplication::translate("thakir_prayer_times_HAF", " \330\257\331\202\331\212\331\202\330\251", nullptr));
        spinBox_Temps_Alerte_Avant->setPrefix(QString());
        tabWidget_Athan->setTabText(tabWidget_Athan->indexOf(tab_2), QApplication::translate("thakir_prayer_times_HAF", "\330\252\331\206\330\250\331\212\331\207 \331\210\330\243\330\260\330\247\331\206", nullptr));
        lineEdit_degreeLat->setText(QApplication::translate("thakir_prayer_times_HAF", "+34.8304", nullptr));
        label_16->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\245\330\263\331\205 \330\247\331\204\331\205\330\257\331\212\331\206\330\251", nullptr));
        label_17->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\256\330\267 \330\247\331\204\330\271\330\261\330\266", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_seaLevel->setToolTip(QApplication::translate("thakir_prayer_times_HAF", "(\331\205\330\252\330\261)", nullptr));
#endif // QT_NO_TOOLTIP
        lineEdit_seaLevel->setText(QApplication::translate("thakir_prayer_times_HAF", "0", nullptr));
        lineEdit_name_madina->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\263\330\271\331\212\330\257\330\251", nullptr));
        label_19->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\256\330\267 \330\247\331\204\330\267\331\210\331\204", nullptr));
        lineEdit_degreeLong->setText(QApplication::translate("thakir_prayer_times_HAF", "+0.1518", nullptr));
        label_20->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\245\330\261\330\252\331\201\330\247\330\271 \330\271\331\206 \331\205\330\263\330\252\331\210\331\211 \330\247\331\204\330\250\330\255\330\261", nullptr));
        label->setText(QApplication::translate("thakir_prayer_times_HAF", "\331\210\331\204\330\247\331\212\330\251", nullptr));
        label_15->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\257\330\247\330\246\330\261\330\251 \330\243\331\210 \330\250\331\204\330\257\331\212\330\251", nullptr));
        radioButton_sitting_HAF->setTitle(QApplication::translate("thakir_prayer_times_HAF", "\330\266\330\250\330\267 \331\205\330\263\330\250\331\202", nullptr));
        radioButton_sitting_user->setTitle(QApplication::translate("thakir_prayer_times_HAF", "\330\266\330\250\330\267 \330\264\330\256\330\265\331\212", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_1), QApplication::translate("thakir_prayer_times_HAF", "\330\256\330\247\330\265 \330\250\330\247\331\204\330\254\330\262\330\247\330\246\330\261", nullptr));
        lineEdit_gmtDiff_monde->setText(QApplication::translate("thakir_prayer_times_HAF", "+3", nullptr));
        lineEdit_degreeLat_monde->setText(QApplication::translate("thakir_prayer_times_HAF", "+21.423333", nullptr));
        label_21->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\245\330\263\331\205 \330\247\331\204\331\205\330\257\331\212\331\206\330\251", nullptr));
        lineEdit_degreeLong_monde->setText(QApplication::translate("thakir_prayer_times_HAF", "+39.823333", nullptr));
        lineEdit_seaLevel_monde->setText(QApplication::translate("thakir_prayer_times_HAF", "0", nullptr));
        lineEdit_name_madina_monde->setText(QApplication::translate("thakir_prayer_times_HAF", "\331\205\331\203\330\251 \330\247\331\204\331\205\331\203\330\261\331\205\330\251", nullptr));
        label_22->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\245\330\261\330\252\331\201\330\247\330\271 \330\271\331\206 \331\205\330\263\330\252\331\210\331\211 \330\247\331\204\330\250\330\255\330\261", nullptr));
        label_23->setText(QApplication::translate("thakir_prayer_times_HAF", "\331\201\330\247\330\261\331\202 \330\247\331\204\330\252\331\210\331\202\331\212\330\252 GMT", nullptr));
        label_24->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\256\330\267 \330\247\331\204\330\271\330\261\330\266", nullptr));
        label_25->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\256\330\267 \330\247\331\204\330\267\331\210\331\204", nullptr));
        comboBox_Method_monde->setItemText(0, QApplication::translate("thakir_prayer_times_HAF", "\330\247\331\204\331\207\331\212\330\246\330\251 \330\247\331\204\331\205\330\265\330\261\331\212\330\251 \330\247\331\204\330\271\330\247\331\205\330\251 \331\204\331\204\331\205\330\263\330\247\330\255\330\251", nullptr));
        comboBox_Method_monde->setItemText(1, QApplication::translate("thakir_prayer_times_HAF", "\330\254\330\247\331\205\330\271\330\251 \330\247\331\204\330\271\331\204\331\210\331\205 \330\247\331\204\330\245\330\263\331\204\330\247\331\205\331\212\330\251 \330\250\331\203\330\261\330\247\330\264\331\212\330\214 \330\264\330\247\331\201\330\271\331\212", nullptr));
        comboBox_Method_monde->setItemText(2, QApplication::translate("thakir_prayer_times_HAF", "\330\254\330\247\331\205\330\271\330\251 \330\247\331\204\330\271\331\204\331\210\331\205 \330\247\331\204\330\245\330\263\331\204\330\247\331\205\331\212\330\251 \330\250\331\203\330\261\330\247\330\264\331\212\330\214 \330\255\331\206\330\250\331\204\331\212", nullptr));
        comboBox_Method_monde->setItemText(3, QApplication::translate("thakir_prayer_times_HAF", "\330\247\331\204\330\245\330\252\330\255\330\247\330\257 \330\247\331\204\330\245\330\263\331\204\330\247\331\205\331\212 \330\250\330\243\331\205\330\261\331\212\331\203\330\247 \330\247\331\204\330\264\331\205\330\247\331\204\331\212\330\251", nullptr));
        comboBox_Method_monde->setItemText(4, QApplication::translate("thakir_prayer_times_HAF", "\330\261\330\247\330\250\330\267\330\251 \330\247\331\204\330\271\330\247\331\204\331\205 \330\247\331\204\330\245\330\263\331\204\330\247\331\205\331\212", nullptr));
        comboBox_Method_monde->setItemText(5, QApplication::translate("thakir_prayer_times_HAF", "\330\252\331\202\331\210\331\212\331\205 \330\243\331\205 \330\247\331\204\331\202\330\261\331\211\330\214 \330\247\331\204\330\263\330\271\331\210\330\257\331\212\330\251", nullptr));
        comboBox_Method_monde->setItemText(6, QApplication::translate("thakir_prayer_times_HAF", "\330\271\330\264\330\247\330\241 \330\257\330\247\330\246\331\205\330\247 \331\201\331\212 90 \330\257\330\261\330\254\330\247\330\252", nullptr));
        comboBox_Method_monde->setItemText(7, QApplication::translate("thakir_prayer_times_HAF", "\330\247\331\204\331\207\331\212\330\246\330\251 \330\247\331\204\331\205\330\265\330\261\331\212\330\251 \330\247\331\204\330\271\330\247\331\205\330\251 \331\204\331\204\331\205\330\263\330\247\330\255\330\251\330\214 \331\205\330\265\330\261", nullptr));

        label_26->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\267\330\261\331\212\331\202\330\251 \330\247\331\204\330\255\330\263\330\247\330\250", nullptr));
        checkBox_Heure_ete->setText(QApplication::translate("thakir_prayer_times_HAF", "\331\205\330\261\330\247\330\271\330\247\330\251 \330\247\331\204\330\252\331\210\331\202\331\212\330\252 \330\247\331\204\330\265\331\212\331\201\331\212", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("thakir_prayer_times_HAF", "\330\257\331\210\331\204 \330\247\331\204\330\271\330\247\331\204\331\205 \330\247\331\204\330\243\330\256\330\261\331\211", nullptr));
        radioButton_sitting_Algerie->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\266\330\250\330\267 \331\204\331\204\330\254\330\262\330\247\330\246\330\261", nullptr));
        radioButton_sitting_monde->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\266\330\250\330\267 \331\204\331\204\330\257\331\210\331\204 \330\247\331\204\330\243\330\256\330\261\331\211", nullptr));
        tabWidget_Athan->setTabText(tabWidget_Athan->indexOf(tab), QApplication::translate("thakir_prayer_times_HAF", "\330\266\330\250\330\267 \330\247\331\204\330\256\331\212\330\247\330\261\330\247\330\252", nullptr));
#ifndef QT_NO_TOOLTIP
        timeEdit_fadjra->setToolTip(QApplication::translate("thakir_prayer_times_HAF", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\247\331\204\331\201\330\261\330\266 :</span><span style=\" font-size:8pt; color:#ffffff;\">\331\211</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\265\331\204\330\247\330\251 \330\247\331\204\331\201\330\254\330\261 : \330\243\330\261\331\203\330\271\330\252\330\247\331\206</span></p>\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin"
                        "-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\247\331\204\330\263\331\206\330\251 :</span><span style=\" font-size:8pt; color:#ffffff;\">\331\211</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\331\202\330\250\331\204 : \330\261\331\203\330\271\330\252\330\247\331\206</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\250\330\271\330\257 : \331\204\330\247\330\264\331\212\330\241</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        timeEdit_fadjra->setDisplayFormat(QApplication::translate("thakir_prayer_times_HAF", "mm:HH", nullptr));
        label_3->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\247\331\204\331\201\330\254\330\261", nullptr));
        label_4->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\247\331\204\330\264\330\261\331\210\331\202", nullptr));
#ifndef QT_NO_TOOLTIP
        timeEdit_chork->setToolTip(QApplication::translate("thakir_prayer_times_HAF", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\331\207\331\210 \331\210\331\202\330\252 \330\245\331\206\330\252\331\207\330\247\330\241 \331\210\331\202\330\252 \330\265\331\204\330\247\330\251 \330\247\331\204\331\201\330\254\330\261</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        timeEdit_chork->setDisplayFormat(QApplication::translate("thakir_prayer_times_HAF", "mm:HH", nullptr));
        label_5->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\247\331\204\330\270\331\207\330\261", nullptr));
#ifndef QT_NO_TOOLTIP
        timeEdit_thohor->setToolTip(QApplication::translate("thakir_prayer_times_HAF", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\247\331\204\331\201\330\261\330\266 :</span><span style=\" font-size:8pt; color:#ffffff;\">\331\211</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\265\331\204\330\247\330\251 \330\247\331\204\330\270\331\207\330\261 : \330\243\330\261\330\250\330\271 \330\261\331\203\330\271\330\247\330\252</span></p>\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty; margi"
                        "n-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\247\331\204\330\263\331\206\330\251 :</span><span style=\" font-size:8pt; color:#ffffff;\">\331\211</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\331\202\330\250\331\204 : 4 \330\261\331\203\330\271\330\247\330\252</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\250\330\271\330\257 : \330\261\331\203\330\271\330\252\330\247\331\206</span></p>\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin"
                        "-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\331\205\331\204\330\247\330\255\330\270\330\251 : \331\210\331\202\330\252 \330\247\331\204\330\261\330\263\331\205\331\212 \331\204\330\243\330\260\330\247\331\206</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\247\331\204\330\270\331\207\330\261 \331\201\331\212 \330\247\331\204\330\254\330\262\330\247\330\246\330\261 \331\207\331\210 13:20</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        timeEdit_thohor->setDisplayFormat(QApplication::translate("thakir_prayer_times_HAF", "mm:HH", nullptr));
        label_6->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\247\331\204\330\271\330\265\330\261", nullptr));
#ifndef QT_NO_TOOLTIP
        timeEdit_asar->setToolTip(QApplication::translate("thakir_prayer_times_HAF", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\247\331\204\331\201\330\261\330\266 :</span><span style=\" font-size:8pt; color:#ffffff;\">\331\211</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\265\331\204\330\247\330\251 \330\247\331\204\330\271\330\265\330\261 : \330\243\330\261\330\250\330\271 \330\261\331\203\330\271\330\247\330\252</span></p>\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty; margi"
                        "n-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\247\331\204\330\263\331\206\330\251 :</span><span style=\" font-size:8pt; color:#ffffff;\">\331\211</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\331\202\330\250\331\204 : \331\204\330\247\330\264\331\212\330\241</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\250\330\271\330\257 : \331\204\330\247\330\264\331\212\330\241</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        timeEdit_asar->setDisplayFormat(QApplication::translate("thakir_prayer_times_HAF", "mm:HH", nullptr));
        label_7->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\247\331\204\331\205\330\272\330\261\330\250", nullptr));
#ifndef QT_NO_TOOLTIP
        timeEdit_maghrab->setToolTip(QApplication::translate("thakir_prayer_times_HAF", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\247\331\204\331\201\330\261\330\266 :</span><span style=\" font-size:8pt; color:#ffffff;\">\331\211</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\265\331\204\330\247\330\251 \330\247\331\204\331\205\330\272\330\261\330\250 : \330\253\331\204\330\247\330\253 \330\261\331\203\330\271\330\247\330\252</span></p>\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empt"
                        "y; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\247\331\204\330\263\331\206\330\251 :</span><span style=\" font-size:8pt; color:#ffffff;\">\331\211</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\331\202\330\250\331\204 : \331\204\330\247\330\264\331\212\330\241</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\250\330\271\330\257 : \330\261\331\203\330\271\330\252\330\247\331\206</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        timeEdit_maghrab->setDisplayFormat(QApplication::translate("thakir_prayer_times_HAF", "mm:HH", nullptr));
        label_8->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\247\331\204\330\271\330\264\330\247\330\241", nullptr));
#ifndef QT_NO_TOOLTIP
        timeEdit_icha->setToolTip(QApplication::translate("thakir_prayer_times_HAF", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\247\331\204\331\201\330\261\330\266 :</span><span style=\" font-size:8pt; color:#ffffff;\">\331\211</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\265\331\204\330\247\330\251 \330\247\331\204\330\271\330\264\330\247\330\241 : \330\243\330\261\330\250\330\271 \330\261\331\203\330\271\330\247\330\252</span></p>\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty"
                        "; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\247\331\204\330\263\331\206\330\251 :</span><span style=\" font-size:8pt; color:#ffffff;\">\331\211</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\331\202\330\250\331\204 : \331\204\330\247\330\264\331\212\330\241</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\330\250\330\271\330\257 : \330\261\331\203\330\271\330\252\330\247\331\206</span></p>\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; m"
                        "argin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">\331\210\330\252\330\261 : \330\261\331\203\330\271\330\251 \330\243\331\210 3 \330\261\331\203\330\271\330\247\330\252 \330\243\331\210 \330\243\331\212</span></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\"> \330\271\330\257\330\257 \331\210\330\252\330\261 \331\204\331\204\330\261\331\203\330\271\330\247\330\252 \330\255\330\252\331\211 11</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        timeEdit_icha->setDisplayFormat(QApplication::translate("thakir_prayer_times_HAF", "mm:HH", nullptr));
        timeEdit_imsak->setDisplayFormat(QApplication::translate("thakir_prayer_times_HAF", "mm:HH", nullptr));
        label_10->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\245\331\205\330\263\330\247\331\203", nullptr));
        timeEdit_imsak_tomorow->setDisplayFormat(QApplication::translate("thakir_prayer_times_HAF", "mm:HH", nullptr));
        label_12->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\245\331\205\330\263\330\247\331\203 \330\247\331\204\330\272\330\257", nullptr));
        timeEdit_fadjra_tomorow->setDisplayFormat(QApplication::translate("thakir_prayer_times_HAF", "mm:HH", nullptr));
        label_13->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\247\331\204\331\201\330\254\330\261 \330\247\331\204\330\272\330\257", nullptr));
        progressBar_temps_restant->setFormat(QApplication::translate("thakir_prayer_times_HAF", "%p%%", nullptr));
        label_temps_restant->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\247\331\204\331\210\331\202\330\252 \330\247\331\204\331\205\330\252\330\250\331\202\331\212 \331\204\330\265\331\204\330\247\330\251 \330\247\331\204\331\205\330\272\330\261\330\250 ", nullptr));
        label_oldsalat->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\247\331\204\330\271\330\265\330\261", nullptr));
        label_nextsalat->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\247\331\204\331\205\330\272\330\261\330\250", nullptr));
        timeEdit_pour_attendre_nextsalat->setDisplayFormat(QApplication::translate("thakir_prayer_times_HAF", "ss:mm:HH", nullptr));
        label_entete->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\254\330\257\331\210\331\204 \330\243\331\210\331\202\330\247\330\252 \330\247\331\204\330\265\331\204\330\247\330\251 \331\204 : \330\263\330\271\331\212\330\257\330\251 ", nullptr));
        tabWidget_Athan->setTabText(tabWidget_Athan->indexOf(Tab_Prayer_Times), QApplication::translate("thakir_prayer_times_HAF", "\330\243\331\210\331\202\330\247\330\252 \330\247\331\204\330\265\331\204\330\247\330\251", nullptr));
        label_madina_name->setText(QApplication::translate("thakir_prayer_times_HAF", "TextLabel", nullptr));
        label_madina_long->setText(QApplication::translate("thakir_prayer_times_HAF", "TextLabel", nullptr));
        label_madina_latitu->setText(QApplication::translate("thakir_prayer_times_HAF", "TextLabel", nullptr));
        label_quibla_info->setText(QApplication::translate("thakir_prayer_times_HAF", "TextLabel", nullptr));
        label_11->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\272\330\261\330\250", nullptr));
        label_2->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\264\330\261\331\202", nullptr));
        label_9->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\264\331\205\330\247\331\204", nullptr));
        label_14->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\254\331\206\331\210\330\250", nullptr));
        label_elevation->setText(QApplication::translate("thakir_prayer_times_HAF", "TextLabel", nullptr));
        tabWidget_Athan->setTabText(tabWidget_Athan->indexOf(Tab_Kibla), QApplication::translate("thakir_prayer_times_HAF", "\330\245\330\252\330\254\330\247\331\207 \330\247\331\204\331\202\330\250\331\204\330\251", nullptr));
        pushButton_about->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\255\331\210\331\204", nullptr));
        pushButton_close->setText(QApplication::translate("thakir_prayer_times_HAF", "\330\256\330\261\331\210\330\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thakir_prayer_times_HAF: public Ui_thakir_prayer_times_HAF {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THAKIR_PRAYER_TIMES_H
