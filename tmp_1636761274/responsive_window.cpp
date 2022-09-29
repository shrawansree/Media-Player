//
// Created by twak on 14/10/2019.
//

#include "responsive_window.h"
#include "responsive_layout.h"
#include "screenshot.h"
#include <iostream>
#include <QApplication>
#include <QScrollArea>



ResponsiveWindow::ResponsiveWindow() {

    setWindowTitle("2811 coursework 2: responsive layouts");
    setMinimumSize(320, 320);
    setMaximumSize(1280, 720);

    createScrollWidgets();
}

void ResponsiveWindow::createWidgets() {

    ResponsiveLayout * rl = new ResponsiveLayout();
    //QScrollArea *newArea = new QScrollArea();

    // add all the widgets we need to demonstrate all layouts
    rl->addWidget(new ResponsiveLabel(kNavTabs)); //set
    rl->addWidget(new ResponsiveLabel(kSButton)); //set
    rl->addWidget(new ResponsiveLabel(kHomeLink)); //set
    rl->addWidget(new ResponsiveLabel(kShoppingBasket)); //set
    rl->addWidget(new ResponsiveLabel(kSignIn)); //set
    rl->addWidget(new ResponsiveLabel(kMenu)); //set
    rl->addWidget(new ResponsiveLabel(kAdvert));

    // we might have more than one search results

    for(int i = 0; i<9; i++){
        rl->addWidget(new ResponsiveLabel(kSResultImage));
        rl->addWidget(new ResponsiveLabel(kSResultText));
    }

    // note that later widgets are drawn on top of earlier widgets
    rl->addWidget(new ResponsiveLabel(kSQuery));//set
    rl->addWidget(new ResponsiveLabel(kSForward)); //set
    rl->addWidget(new ResponsiveLabel(kSBackward)); //set
    rl->addWidget(new ResponsiveLabel(kSOptions)); //set

    setLayout(rl);
}


void ResponsiveWindow::createScrollWidgets() {

    QScrollArea *area = new QScrollArea(); //creates QScrollArea
    QWidget *base = new QWidget(); //Widget that contains the Results
    ResponsiveLayout *rl = new ResponsiveLayout(); //Responsive Layout for the overall app
    ResponsiveLayout *grid = new ResponsiveLayout(); //Responsive Layout for the
                                                    //container widget that arranges Results

    area->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    area->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    area->setWidgetResizable(false);

    base->setFixedSize(900,600); //set maximum size of QScrollArea widget (and subsequently layout)
    grid->setSizeConstraint(QLayout::SetMinAndMaxSize);

    // add all the widgets we need to demonstrate all layouts


    for(int i = 0; i<17; i++){
        grid->addWidget(new ResponsiveLabel(kSResultImage));
        grid->addWidget(new ResponsiveLabel(kSResultText));
    }

    rl->addWidget(new ResponsiveLabel(kNavTabs)); //set
    rl->addWidget(new ResponsiveLabel(kSButton)); //set
    rl->addWidget(new ResponsiveLabel(kHomeLink)); //set
    rl->addWidget(new ResponsiveLabel(kShoppingBasket)); //set
    rl->addWidget(new ResponsiveLabel(kSignIn)); //set
    rl->addWidget(new ResponsiveLabel(kMenu)); //set
    rl->addWidget(new ResponsiveLabel(kAdvert));
    rl->addWidget(new ResponsiveLabel(kDeals));
    rl->addWidget(new ResponsiveLabel(kPageNumber));

    // we might have more than one search results

    // note that later widgets are drawn on top of earlier widgets
    rl->addWidget(new ResponsiveLabel(kSQuery));//set
    rl->addWidget(new ResponsiveLabel(kSForward)); //set
    rl->addWidget(new ResponsiveLabel(kSBackward)); //set
    rl->addWidget(new ResponsiveLabel(kSOptions)); //set

    base->setLayout(grid);
    area->setWidget(base);
    rl->addWidget(area);

    setLayout(rl);

}
