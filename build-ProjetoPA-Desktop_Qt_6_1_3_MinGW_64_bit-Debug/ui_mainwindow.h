/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "color.h"
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionSave;
    QWidget *centralwidget;
    Plotter *widget;
    QPushButton *pushButtonCriaCanvas;
    Color *widget_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QSlider *horizontalSliderGreen;
    QLabel *Azul;
    QLabel *Verde;
    QSpinBox *spinBoxG;
    QSlider *horizontalSliderBlue;
    QSpinBox *spinBoxA;
    QLabel *Vermelho;
    QSpinBox *spinBoxR;
    QSlider *horizontalSliderRed;
    QLabel *Alfa;
    QSlider *horizontalSliderAlfa;
    QSpinBox *spinBoxB;
    QLabel *YGeral;
    QSlider *horizontalSliderZCanvas;
    QSpinBox *spinBoxXCanvas;
    QSpinBox *spinBoxYCanvas;
    QLabel *ZGeral;
    QSpinBox *spinBoxZCanvas;
    QSlider *horizontalSliderXCanvas;
    QLabel *XGeral;
    QSlider *horizontalSliderYCanvas;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QSlider *horizontalSliderDimZ;
    QSlider *horizontalSliderDimX;
    QSlider *horizontalSliderDimY;
    QSpinBox *spinBoxDimZ;
    QSpinBox *spinBoxDimY;
    QSpinBox *spinBoxDimX;
    QLabel *DimZ;
    QLabel *DimY;
    QLabel *DimX;
    QLabel *labelBox;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelSphere;
    QGridLayout *gridLayout_4;
    QSpinBox *spinBoxRaio;
    QSlider *horizontalSliderRaio;
    QLabel *Raio;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_3;
    QSlider *horizontalSliderRx;
    QSlider *horizontalSliderRy;
    QLabel *Rz;
    QLabel *Rx;
    QSpinBox *spinBoxRx;
    QSpinBox *spinBoxRz;
    QSlider *horizontalSliderRz;
    QSpinBox *spinBoxRy;
    QLabel *Ry;
    QLabel *labelEllipsoid;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButtonPutVoxel;
    QRadioButton *radioButtonPutBox;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonCutVoxel;
    QRadioButton *radioButtonPutEllipsoid;
    QRadioButton *radioButtonPutSphere;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1267, 726);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new Plotter(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 20, 441, 371));
        pushButtonCriaCanvas = new QPushButton(centralwidget);
        pushButtonCriaCanvas->setObjectName(QString::fromUtf8("pushButtonCriaCanvas"));
        pushButtonCriaCanvas->setGeometry(QRect(800, 350, 80, 22));
        widget_2 = new Color(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setEnabled(true);
        widget_2->setGeometry(QRect(330, 510, 61, 61));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 440, 161, 134));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSliderGreen = new QSlider(layoutWidget);
        horizontalSliderGreen->setObjectName(QString::fromUtf8("horizontalSliderGreen"));
        horizontalSliderGreen->setMinimum(1);
        horizontalSliderGreen->setMaximum(254);
        horizontalSliderGreen->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderGreen, 1, 2, 1, 1);

        Azul = new QLabel(layoutWidget);
        Azul->setObjectName(QString::fromUtf8("Azul"));

        gridLayout->addWidget(Azul, 2, 1, 1, 1);

        Verde = new QLabel(layoutWidget);
        Verde->setObjectName(QString::fromUtf8("Verde"));

        gridLayout->addWidget(Verde, 1, 1, 1, 1);

        spinBoxG = new QSpinBox(layoutWidget);
        spinBoxG->setObjectName(QString::fromUtf8("spinBoxG"));
        spinBoxG->setMaximum(255);

        gridLayout->addWidget(spinBoxG, 1, 0, 1, 1);

        horizontalSliderBlue = new QSlider(layoutWidget);
        horizontalSliderBlue->setObjectName(QString::fromUtf8("horizontalSliderBlue"));
        horizontalSliderBlue->setMinimum(1);
        horizontalSliderBlue->setMaximum(254);
        horizontalSliderBlue->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderBlue, 2, 2, 1, 1);

        spinBoxA = new QSpinBox(layoutWidget);
        spinBoxA->setObjectName(QString::fromUtf8("spinBoxA"));
        spinBoxA->setMaximum(255);

        gridLayout->addWidget(spinBoxA, 3, 0, 1, 1);

        Vermelho = new QLabel(layoutWidget);
        Vermelho->setObjectName(QString::fromUtf8("Vermelho"));

        gridLayout->addWidget(Vermelho, 0, 1, 1, 1);

        spinBoxR = new QSpinBox(layoutWidget);
        spinBoxR->setObjectName(QString::fromUtf8("spinBoxR"));
        spinBoxR->setMaximum(255);

        gridLayout->addWidget(spinBoxR, 0, 0, 1, 1);

        horizontalSliderRed = new QSlider(layoutWidget);
        horizontalSliderRed->setObjectName(QString::fromUtf8("horizontalSliderRed"));
        horizontalSliderRed->setMinimum(1);
        horizontalSliderRed->setMaximum(254);
        horizontalSliderRed->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderRed, 0, 2, 1, 1);

        Alfa = new QLabel(layoutWidget);
        Alfa->setObjectName(QString::fromUtf8("Alfa"));

        gridLayout->addWidget(Alfa, 3, 1, 1, 1);

        horizontalSliderAlfa = new QSlider(layoutWidget);
        horizontalSliderAlfa->setObjectName(QString::fromUtf8("horizontalSliderAlfa"));
        horizontalSliderAlfa->setMinimum(1);
        horizontalSliderAlfa->setMaximum(254);
        horizontalSliderAlfa->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSliderAlfa, 3, 2, 1, 1);

        spinBoxB = new QSpinBox(layoutWidget);
        spinBoxB->setObjectName(QString::fromUtf8("spinBoxB"));
        spinBoxB->setMaximum(255);

        gridLayout->addWidget(spinBoxB, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        YGeral = new QLabel(centralwidget);
        YGeral->setObjectName(QString::fromUtf8("YGeral"));
        YGeral->setGeometry(QRect(904, 356, 16, 16));
        horizontalSliderZCanvas = new QSlider(centralwidget);
        horizontalSliderZCanvas->setObjectName(QString::fromUtf8("horizontalSliderZCanvas"));
        horizontalSliderZCanvas->setGeometry(QRect(960, 401, 84, 16));
        horizontalSliderZCanvas->setOrientation(Qt::Horizontal);
        spinBoxXCanvas = new QSpinBox(centralwidget);
        spinBoxXCanvas->setObjectName(QString::fromUtf8("spinBoxXCanvas"));
        spinBoxXCanvas->setGeometry(QRect(917, 325, 37, 23));
        spinBoxYCanvas = new QSpinBox(centralwidget);
        spinBoxYCanvas->setObjectName(QString::fromUtf8("spinBoxYCanvas"));
        spinBoxYCanvas->setGeometry(QRect(917, 356, 37, 23));
        ZGeral = new QLabel(centralwidget);
        ZGeral->setObjectName(QString::fromUtf8("ZGeral"));
        ZGeral->setGeometry(QRect(904, 397, 16, 16));
        spinBoxZCanvas = new QSpinBox(centralwidget);
        spinBoxZCanvas->setObjectName(QString::fromUtf8("spinBoxZCanvas"));
        spinBoxZCanvas->setGeometry(QRect(917, 397, 37, 23));
        horizontalSliderXCanvas = new QSlider(centralwidget);
        horizontalSliderXCanvas->setObjectName(QString::fromUtf8("horizontalSliderXCanvas"));
        horizontalSliderXCanvas->setGeometry(QRect(960, 329, 84, 16));
        horizontalSliderXCanvas->setOrientation(Qt::Horizontal);
        XGeral = new QLabel(centralwidget);
        XGeral->setObjectName(QString::fromUtf8("XGeral"));
        XGeral->setGeometry(QRect(904, 325, 16, 16));
        horizontalSliderYCanvas = new QSlider(centralwidget);
        horizontalSliderYCanvas->setObjectName(QString::fromUtf8("horizontalSliderYCanvas"));
        horizontalSliderYCanvas->setGeometry(QRect(960, 360, 84, 16));
        horizontalSliderYCanvas->setOrientation(Qt::Horizontal);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setEnabled(true);
        layoutWidget1->setGeometry(QRect(736, 490, 191, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSliderDimZ = new QSlider(layoutWidget1);
        horizontalSliderDimZ->setObjectName(QString::fromUtf8("horizontalSliderDimZ"));
        horizontalSliderDimZ->setEnabled(true);
        horizontalSliderDimZ->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderDimZ, 4, 2, 1, 1);

        horizontalSliderDimX = new QSlider(layoutWidget1);
        horizontalSliderDimX->setObjectName(QString::fromUtf8("horizontalSliderDimX"));
        horizontalSliderDimX->setEnabled(true);
        horizontalSliderDimX->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderDimX, 2, 2, 1, 1);

        horizontalSliderDimY = new QSlider(layoutWidget1);
        horizontalSliderDimY->setObjectName(QString::fromUtf8("horizontalSliderDimY"));
        horizontalSliderDimY->setEnabled(true);
        horizontalSliderDimY->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(horizontalSliderDimY, 3, 2, 1, 1);

        spinBoxDimZ = new QSpinBox(layoutWidget1);
        spinBoxDimZ->setObjectName(QString::fromUtf8("spinBoxDimZ"));
        spinBoxDimZ->setEnabled(true);

        gridLayout_2->addWidget(spinBoxDimZ, 4, 0, 1, 1);

        spinBoxDimY = new QSpinBox(layoutWidget1);
        spinBoxDimY->setObjectName(QString::fromUtf8("spinBoxDimY"));
        spinBoxDimY->setEnabled(true);

        gridLayout_2->addWidget(spinBoxDimY, 3, 0, 1, 1);

        spinBoxDimX = new QSpinBox(layoutWidget1);
        spinBoxDimX->setObjectName(QString::fromUtf8("spinBoxDimX"));
        spinBoxDimX->setEnabled(true);

        gridLayout_2->addWidget(spinBoxDimX, 2, 0, 1, 1);

        DimZ = new QLabel(layoutWidget1);
        DimZ->setObjectName(QString::fromUtf8("DimZ"));
        DimZ->setEnabled(true);

        gridLayout_2->addWidget(DimZ, 4, 1, 1, 1);

        DimY = new QLabel(layoutWidget1);
        DimY->setObjectName(QString::fromUtf8("DimY"));
        DimY->setEnabled(true);

        gridLayout_2->addWidget(DimY, 3, 1, 1, 1);

        DimX = new QLabel(layoutWidget1);
        DimX->setObjectName(QString::fromUtf8("DimX"));
        DimX->setEnabled(true);

        gridLayout_2->addWidget(DimX, 2, 1, 1, 1);

        labelBox = new QLabel(layoutWidget1);
        labelBox->setObjectName(QString::fromUtf8("labelBox"));
        labelBox->setEnabled(true);

        gridLayout_2->addWidget(labelBox, 1, 0, 1, 2);


        verticalLayout_2->addLayout(gridLayout_2);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setEnabled(true);
        layoutWidget2->setGeometry(QRect(740, 440, 371, 47));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        labelSphere = new QLabel(layoutWidget2);
        labelSphere->setObjectName(QString::fromUtf8("labelSphere"));
        labelSphere->setEnabled(true);

        verticalLayout_5->addWidget(labelSphere);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        spinBoxRaio = new QSpinBox(layoutWidget2);
        spinBoxRaio->setObjectName(QString::fromUtf8("spinBoxRaio"));
        spinBoxRaio->setEnabled(true);

        gridLayout_4->addWidget(spinBoxRaio, 0, 0, 1, 1);

        horizontalSliderRaio = new QSlider(layoutWidget2);
        horizontalSliderRaio->setObjectName(QString::fromUtf8("horizontalSliderRaio"));
        horizontalSliderRaio->setEnabled(true);
        horizontalSliderRaio->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSliderRaio, 0, 2, 1, 1);

        Raio = new QLabel(layoutWidget2);
        Raio->setObjectName(QString::fromUtf8("Raio"));
        Raio->setEnabled(true);

        gridLayout_4->addWidget(Raio, 0, 1, 1, 1);


        verticalLayout_5->addLayout(gridLayout_4);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setEnabled(true);
        layoutWidget3->setGeometry(QRect(930, 490, 191, 111));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSliderRx = new QSlider(layoutWidget3);
        horizontalSliderRx->setObjectName(QString::fromUtf8("horizontalSliderRx"));
        horizontalSliderRx->setEnabled(true);
        horizontalSliderRx->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSliderRx, 2, 2, 1, 1);

        horizontalSliderRy = new QSlider(layoutWidget3);
        horizontalSliderRy->setObjectName(QString::fromUtf8("horizontalSliderRy"));
        horizontalSliderRy->setEnabled(true);
        horizontalSliderRy->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSliderRy, 3, 2, 1, 1);

        Rz = new QLabel(layoutWidget3);
        Rz->setObjectName(QString::fromUtf8("Rz"));
        Rz->setEnabled(true);

        gridLayout_3->addWidget(Rz, 4, 1, 1, 1);

        Rx = new QLabel(layoutWidget3);
        Rx->setObjectName(QString::fromUtf8("Rx"));
        Rx->setEnabled(true);

        gridLayout_3->addWidget(Rx, 2, 1, 1, 1);

        spinBoxRx = new QSpinBox(layoutWidget3);
        spinBoxRx->setObjectName(QString::fromUtf8("spinBoxRx"));
        spinBoxRx->setEnabled(true);

        gridLayout_3->addWidget(spinBoxRx, 2, 0, 1, 1);

        spinBoxRz = new QSpinBox(layoutWidget3);
        spinBoxRz->setObjectName(QString::fromUtf8("spinBoxRz"));
        spinBoxRz->setEnabled(true);

        gridLayout_3->addWidget(spinBoxRz, 4, 0, 1, 1);

        horizontalSliderRz = new QSlider(layoutWidget3);
        horizontalSliderRz->setObjectName(QString::fromUtf8("horizontalSliderRz"));
        horizontalSliderRz->setEnabled(true);
        horizontalSliderRz->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSliderRz, 4, 2, 1, 1);

        spinBoxRy = new QSpinBox(layoutWidget3);
        spinBoxRy->setObjectName(QString::fromUtf8("spinBoxRy"));
        spinBoxRy->setEnabled(true);

        gridLayout_3->addWidget(spinBoxRy, 3, 0, 1, 1);

        Ry = new QLabel(layoutWidget3);
        Ry->setObjectName(QString::fromUtf8("Ry"));
        Ry->setEnabled(true);

        gridLayout_3->addWidget(Ry, 3, 1, 1, 1);

        labelEllipsoid = new QLabel(layoutWidget3);
        labelEllipsoid->setObjectName(QString::fromUtf8("labelEllipsoid"));
        labelEllipsoid->setEnabled(true);

        gridLayout_3->addWidget(labelEllipsoid, 1, 2, 1, 1);


        verticalLayout_4->addLayout(gridLayout_3);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(770, 40, 315, 141));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_6->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButtonPutVoxel = new QRadioButton(verticalLayoutWidget_2);
        radioButtonPutVoxel->setObjectName(QString::fromUtf8("radioButtonPutVoxel"));

        horizontalLayout_2->addWidget(radioButtonPutVoxel);

        radioButtonPutBox = new QRadioButton(verticalLayoutWidget_2);
        radioButtonPutBox->setObjectName(QString::fromUtf8("radioButtonPutBox"));

        horizontalLayout_2->addWidget(radioButtonPutBox);


        verticalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButtonCutVoxel = new QRadioButton(verticalLayoutWidget_2);
        radioButtonCutVoxel->setObjectName(QString::fromUtf8("radioButtonCutVoxel"));
        radioButtonCutVoxel->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_4->addWidget(radioButtonCutVoxel);


        horizontalLayout_3->addLayout(horizontalLayout_4);

        radioButtonPutEllipsoid = new QRadioButton(verticalLayoutWidget_2);
        radioButtonPutEllipsoid->setObjectName(QString::fromUtf8("radioButtonPutEllipsoid"));

        horizontalLayout_3->addWidget(radioButtonPutEllipsoid);

        radioButtonPutSphere = new QRadioButton(verticalLayoutWidget_2);
        radioButtonPutSphere->setObjectName(QString::fromUtf8("radioButtonPutSphere"));

        horizontalLayout_3->addWidget(radioButtonPutSphere);


        verticalLayout_6->addLayout(horizontalLayout_3);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(790, 280, 311, 46));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 390, 311, 46));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1267, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);
        QObject::connect(spinBoxRaio, &QSpinBox::valueChanged, horizontalSliderRaio, &QSlider::setValue);
        QObject::connect(horizontalSliderRaio, &QSlider::valueChanged, spinBoxRaio, &QSpinBox::setValue);
        QObject::connect(spinBoxRx, &QSpinBox::valueChanged, horizontalSliderRx, &QSlider::setValue);
        QObject::connect(horizontalSliderRx, &QSlider::valueChanged, spinBoxRx, &QSpinBox::setValue);
        QObject::connect(spinBoxRy, &QSpinBox::valueChanged, horizontalSliderRy, &QSlider::setValue);
        QObject::connect(horizontalSliderRy, &QSlider::valueChanged, spinBoxRy, &QSpinBox::setValue);
        QObject::connect(spinBoxRz, &QSpinBox::valueChanged, horizontalSliderRz, &QSlider::setValue);
        QObject::connect(horizontalSliderRz, &QSlider::valueChanged, spinBoxRz, &QSpinBox::setValue);
        QObject::connect(spinBoxDimX, &QSpinBox::valueChanged, horizontalSliderDimX, &QSlider::setValue);
        QObject::connect(horizontalSliderDimX, &QSlider::valueChanged, spinBoxDimX, &QSpinBox::setValue);
        QObject::connect(spinBoxDimY, &QSpinBox::valueChanged, horizontalSliderDimY, &QSlider::setValue);
        QObject::connect(horizontalSliderDimY, &QSlider::valueChanged, spinBoxDimY, &QSpinBox::setValue);
        QObject::connect(spinBoxDimZ, &QSpinBox::valueChanged, horizontalSliderDimZ, &QSlider::setValue);
        QObject::connect(horizontalSliderDimZ, &QSlider::valueChanged, spinBoxDimZ, &QSpinBox::setValue);
        QObject::connect(spinBoxR, &QSpinBox::valueChanged, horizontalSliderRed, &QSlider::setValue);
        QObject::connect(horizontalSliderRed, &QSlider::valueChanged, spinBoxR, &QSpinBox::setValue);
        QObject::connect(spinBoxG, &QSpinBox::valueChanged, horizontalSliderGreen, &QSlider::setValue);
        QObject::connect(horizontalSliderGreen, &QSlider::valueChanged, spinBoxG, &QSpinBox::setValue);
        QObject::connect(spinBoxB, &QSpinBox::valueChanged, horizontalSliderBlue, &QSlider::setValue);
        QObject::connect(horizontalSliderBlue, &QSlider::valueChanged, spinBoxB, &QSpinBox::setValue);
        QObject::connect(spinBoxA, &QSpinBox::valueChanged, horizontalSliderAlfa, &QSlider::setValue);
        QObject::connect(horizontalSliderAlfa, &QSlider::valueChanged, spinBoxA, &QSpinBox::setValue);
        QObject::connect(spinBoxXCanvas, &QSpinBox::valueChanged, horizontalSliderXCanvas, &QSlider::setValue);
        QObject::connect(horizontalSliderXCanvas, &QSlider::valueChanged, spinBoxXCanvas, &QSpinBox::setValue);
        QObject::connect(spinBoxYCanvas, &QSpinBox::valueChanged, horizontalSliderYCanvas, &QSlider::setValue);
        QObject::connect(horizontalSliderYCanvas, &QSlider::valueChanged, spinBoxYCanvas, &QSpinBox::setValue);
        QObject::connect(spinBoxZCanvas, &QSpinBox::valueChanged, horizontalSliderZCanvas, &QSlider::setValue);
        QObject::connect(horizontalSliderZCanvas, &QSlider::valueChanged, spinBoxZCanvas, &QSpinBox::setValue);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(sair()));
        QObject::connect(horizontalSliderBlue, SIGNAL(sliderMoved(int)), widget_2, SLOT(set_b(int)));
        QObject::connect(horizontalSliderGreen, SIGNAL(sliderMoved(int)), widget_2, SLOT(set_g(int)));
        QObject::connect(horizontalSliderRed, SIGNAL(sliderMoved(int)), widget_2, SLOT(set_r(int)));
        QObject::connect(spinBoxA, &QSpinBox::valueChanged, horizontalSliderAlfa, &QSlider::setValue);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        pushButtonCriaCanvas->setText(QCoreApplication::translate("MainWindow", "Criar Espa\303\247o", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Defina as cores", nullptr));
        Azul->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        Verde->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        Vermelho->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        Alfa->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        YGeral->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        ZGeral->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        XGeral->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        DimZ->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        DimY->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        DimX->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        labelBox->setText(QCoreApplication::translate("MainWindow", "Dimens\303\265es da caixa", nullptr));
        labelSphere->setText(QCoreApplication::translate("MainWindow", "Dimens\303\265es da esfera", nullptr));
        Raio->setText(QCoreApplication::translate("MainWindow", "Raio", nullptr));
        Rz->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        Rx->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        Ry->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        labelEllipsoid->setText(QCoreApplication::translate("MainWindow", "Dimens\303\265es da elipse", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Selecione uma ferramenta", nullptr));
        radioButtonPutVoxel->setText(QCoreApplication::translate("MainWindow", "Acrescentar ponto", nullptr));
        radioButtonPutBox->setText(QCoreApplication::translate("MainWindow", "Acrescentar caixa", nullptr));
        radioButtonCutVoxel->setText(QCoreApplication::translate("MainWindow", "Borracha", nullptr));
        radioButtonPutEllipsoid->setText(QCoreApplication::translate("MainWindow", "Acrescentar elipse", nullptr));
        radioButtonPutSphere->setText(QCoreApplication::translate("MainWindow", "Acrescentar esfera", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Defina o tamanho do espa\303\247o a ser usado para desenhar", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Tamanho padr\303\243o: 20x20x20", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
