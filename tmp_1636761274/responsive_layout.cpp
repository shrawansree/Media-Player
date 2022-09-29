//
// Created by twak on 07/10/2019.
//

#include "responsive_layout.h"
#include "responsive_label.h"
#include <iostream>
#include <QScrollArea>

void ResponsiveLayout::setGeoSearchQ(ResponsiveLabel &label ,const QRect &rec){

        //sets the position of Search Query
        if(rec.width() < rec.height())
            label.setGeometry(2+(0.1*rec.width())+rec.x(),0+rec.y(),rec.width()*0.8-4, 40);

        else if(rec.width() <= 420 || rec.height() <= 420)
            label.setGeometry(2+(0.1*rec.width())+rec.x(),0+rec.y(),rec.width()*0.8-4, 40);

        else if(rec.width() <= 640 || rec.height() <= 520)
            label.setGeometry(2+(0.1*rec.width())+rec.x(),0+rec.y(),rec.width()*0.8-4, 40);

        else if(rec.width() <= 960 || rec.height() <= 620)
            label.setGeometry(2+(0.1*rec.width())+rec.x(),0+rec.y(),rec.width()*0.7-4, 50);

        else if(rec.width() <= 1280 || rec.height() <= 720)
            label.setGeometry(2+(0.1*rec.width())+rec.x(),0+rec.y(),rec.width()*0.7-4, 60);

        else
            label.setGeometry (-1,-1,0,0);

}


void ResponsiveLayout::setGeoOptions(ResponsiveLabel &label ,const QRect &rec){
    //sets the position of Options

    if(rec.width() < rec.height())
        label.setGeometry (-1,-1,0,0);

    else if(rec.width() <= 420 || rec.height() <= 420)
        label.setGeometry (-1,-1,0,0);

    else if(rec.width() <= 640 || rec.height() <= 520)
        label.setGeometry (-1,-1,0,0);

    else if(rec.width() <= 960 || rec.height() <= 620)
        label.setGeometry(2+(0.9*rec.width())+rec.x(),0+rec.y(),rec.width()/10-2, 50);

    else if(rec.width() <= 1280 || rec.height() <= 720)
        label.setGeometry(2+(0.9*rec.width())+rec.x(),0+rec.y(),rec.width()/10-2, 60);

    else
        label.setGeometry (-1,-1,0,0);

}


void ResponsiveLayout::setGeoShopping(ResponsiveLabel &label ,const QRect &rec){

    //sets the position of Basket

    if(rec.width() < rec.height())
        label.setGeometry(2+(0.9*rec.width())+rec.x(),45+rec.y(),rec.width()/10-2, 40);

    else if(rec.width() <= 420 || rec.height() <= 420)
        label.setGeometry(2+(0.9*rec.width())+rec.x(),45+rec.y(),rec.width()/10-2, 40);

    else if(rec.width() <= 640 || rec.height() <= 520)
        label.setGeometry(2+(0.9*rec.width())+rec.x(),45+rec.y(),rec.width()/10-2, 40);

    else if(rec.width() <= 960 || rec.height() <= 620)
        label.setGeometry(2+(0.9*rec.width())+rec.x(),55+rec.y(),rec.width()/10-2, 50);

    else if(rec.width() <= 1280 || rec.height() <= 720)
        label.setGeometry(2+(0.9*rec.width())+rec.x(),65+rec.y(),rec.width()/10-2, 60);
    else
        label.setGeometry (-1,-1,0,0);
}


void ResponsiveLayout::setGeoHomeLink(ResponsiveLabel &label ,const QRect &rec){

    //sets the position of Home

    if(rec.width() < rec.height())
        label.setGeometry(rec.x(),0+rec.y(),rec.width()/10-2, 40);

    else if(rec.width() <= 420 || rec.height() <= 420)
        label.setGeometry(rec.x(),0+rec.y(),rec.width()/10-2, 40);

    else if(rec.width() <= 640 || rec.height() <= 520)
        label.setGeometry(rec.x(),0+rec.y(),rec.width()/10-2, 40);

    else if(rec.width() <= 960 || rec.height() <= 620)
        label.setGeometry(rec.x(),0+rec.y(),rec.width()/10-2, 50);

    else if(rec.width() <= 1280 || rec.height() <= 720)
        label.setGeometry(rec.x(),0+rec.y(),rec.width()/10-2, 60);
    else
        label.setGeometry (-1,-1,0,0);
}


void ResponsiveLayout::setGeoSButton(ResponsiveLabel &label ,const QRect &rec){

    //sets the position of Search Button

    if(rec.width() < rec.height())
        label.setGeometry(2+(0.9*rec.width())+rec.x(),0+rec.y(),rec.width()/10-2, 40);

    else if(rec.width() <= 420 || rec.height() <= 420)
        label.setGeometry(2+(0.9*rec.width())+rec.x(),0+rec.y(),rec.width()/10-2, 40);

    else if(rec.width() <= 640 || rec.height() <= 520)
        label.setGeometry(2+(0.9*rec.width())+rec.x(),0+rec.y(),rec.width()/10-2, 40);

    else if(rec.width() <= 960 || rec.height() <= 620)
        label.setGeometry(2+(0.8*rec.width())+rec.x(),0+rec.y(),rec.width()/10-4, 50);

    else if(rec.width() <= 1280 || rec.height() <= 720)
        label.setGeometry(2+(0.8*rec.width())+rec.x(),0+rec.y(),rec.width()/10-4, 60);

    else
        label.setGeometry (-1,-1,0,0);
}


void ResponsiveLayout::setGeoDeals(ResponsiveLabel &label, const QRect &rec){
    //sets the position of Deals

    if(rec.width() < rec.height())
        label.setGeometry (-1,-1,0,0);

    else if(rec.width() <= 420 || rec.height() <= 420)
        label.setGeometry (-1,-1,0,0);

    else if(rec.width() <= 640 || rec.height() <= 520)
        label.setGeometry (-1,-1,0,0);

    else if(rec.width() <= 960 || rec.height() <= 620)
        label.setGeometry(2+(0.8*rec.width())+rec.x(),55+rec.y(),rec.width()/10-4, 50);

    else if(rec.width() <= 1280 || rec.height() <= 720)
        label.setGeometry(2+(0.8*rec.width())+rec.x(),65+rec.y(),rec.width()/10-4, 60);

    else
        label.setGeometry (-1,-1,0,0);
}


void ResponsiveLayout::setGeoNavigation(ResponsiveLabel &label, const QRect &rec){
    //sets the position of Navigation

    if(rec.width() < rec.height())
        label.setGeometry(2+(0.1*rec.width())+rec.x(),45+rec.y(),rec.width()*0.8-4, 40);

    else if(rec.width() <= 420 || rec.height() <= 420)
        label.setGeometry(2+(0.1*rec.width())+rec.x(),45+rec.y(),rec.width()*0.8-4, 40);

    else if(rec.width() <= 640 || rec.height() <= 520)
        label.setGeometry(2+(0.1*rec.width())+rec.x(),45+rec.y(),rec.width()*0.8-4, 40);

    else if(rec.width() <= 960 || rec.height() <= 620)
        label.setGeometry(2+(0.1*rec.width())+rec.x(),55+rec.y(),rec.width()*0.7-4, 50);

    else if(rec.width() <= 1280 || rec.height() <= 720)
        label.setGeometry(2+(0.1*rec.width())+rec.x(),65+rec.y(),rec.width()*0.7-4, 60);

    else
        label.setGeometry (-1,-1,0,0);

}


void ResponsiveLayout::setGeoSignIn(ResponsiveLabel &label ,const QRect &rec){

    //sets the position of Sign In

    if(rec.width() < rec.height())
        label.setGeometry(rec.x(),45+rec.y(),rec.width()/10-2, 40);

    else if(rec.width() <= 420 || rec.height() <= 420)
        label.setGeometry(rec.x(),45+rec.y(),rec.width()/10-2, 40);

    else if(rec.width() <= 640 || rec.height() <= 520)
        label.setGeometry(rec.x(),45+rec.y(),rec.width()/10-2, 40);

    else if(rec.width() <= 960 || rec.height() <= 620)
        label.setGeometry(rec.x(),55+rec.y(),rec.width()/10-2, 24);

    else if(rec.width() <= 1280 || rec.height() <= 720)
        label.setGeometry(rec.x(),65+rec.y(),rec.width()/10-2, 29);

    else
        label.setGeometry (-1,-1,0,0);
}


void ResponsiveLayout::setGeoMenu(ResponsiveLabel &label ,const QRect &rec){

    //sets the position of Menu

    if(rec.width() < rec.height())
        label.setGeometry (-1,-1,0,0);

    else if(rec.width() <= 420 || rec.height() <= 420)
        label.setGeometry (-1,-1,0,0);

    else if(rec.width() <= 640 || rec.height() <= 520)
        label.setGeometry (-1,-1,0,0);

    else if(rec.width() <= 960 || rec.height() <= 620)
        label.setGeometry(rec.x(),80+rec.y(),rec.width()/10-2, 24);

    else if(rec.width() <= 1280 || rec.height() <= 720)
        label.setGeometry(rec.x(),95+rec.y(),rec.width()/10-2, 29);

    else
        label.setGeometry (-1,-1,0,0);
}


void ResponsiveLayout::setGeoSForward(ResponsiveLabel &label ,const QRect &rec){

    //sets the position of Forward button

    if(rec.width() < rec.height())
        label.setGeometry((0.55*rec.width())+rec.x(),
                 rec.height()+rec.y()-rec.height()*0.06,0.1*rec.width()-2, rec.height()*0.06-2);

    else if(rec.width() <= 420 || rec.height() <= 420)
        label.setGeometry((0.55*rec.width())+rec.x(),
                 rec.height()+rec.y()-rec.height()*0.06,0.1*rec.width()-2, rec.height()*0.06-2);

    else if(rec.width() <= 640 || rec.height() <= 520)
        label.setGeometry((0.55*rec.width())+rec.x(),
                 rec.height()+rec.y()-rec.height()*0.06,0.1*rec.width()-2, rec.height()*0.06-2);

    else if(rec.width() <= 960 || rec.height() <= 620)
        label.setGeometry((0.55*rec.width())+rec.x(),
                rec.height()+rec.y()-rec.height()*0.06,0.1*rec.width()-2, rec.height()*0.06-2);

    else if(rec.width() <= 1280 || rec.height() <= 720)
        label.setGeometry((0.55*rec.width())+rec.x(),
                rec.height()+rec.y()-rec.height()*0.06,0.1*rec.width()-2, rec.height()*0.06-2);

    else
        label.setGeometry (-1,-1,0,0);
}


void ResponsiveLayout::setGeoSBackward(ResponsiveLabel &label ,const QRect &rec){

    //sets the position of Backward button

    if(rec.width() < rec.height())
        label.setGeometry((0.35*rec.width())+rec.x(),
                rec.height()+rec.y()-rec.height()*0.06,0.1*rec.width()-2, rec.height()*0.06-2);

    else if(rec.width() <= 420 || rec.height() <= 420)
        label.setGeometry((0.35*rec.width())+rec.x(),
                rec.height()+rec.y()-rec.height()*0.06,0.1*rec.width()-2, rec.height()*0.06-2);

    else if(rec.width() <= 640 || rec.height() <= 520)
        label.setGeometry((0.35*rec.width())+rec.x(),
                rec.height()+rec.y()-rec.height()*0.06,0.1*rec.width()-2, rec.height()*0.06-2);

    else if(rec.width() <= 960 || rec.height() <= 620)
        label.setGeometry((0.35*rec.width())+rec.x(),
                rec.height()+rec.y()-rec.height()*0.06,0.1*rec.width()-2, rec.height()*0.06-2);

    else if(rec.width() <= 1280 || rec.height() <= 720)
        label.setGeometry((0.35*rec.width())+rec.x(),
                rec.height()+rec.y()-rec.height()*0.06,0.1*rec.width()-2, rec.height()*0.06-2);

    else
        label.setGeometry (-1,-1,0,0);
}


void ResponsiveLayout::setGeoPageNumber(ResponsiveLabel &label, const QRect &rec){
    //sets the position of Page Number

    if(rec.width() < rec.height())
        label.setGeometry((0.45*rec.width())+rec.x(),
                rec.height()+rec.y()-rec.height()*0.06,0.1*rec.width()-2, rec.height()*0.06-2);

    else if(rec.width() <= 420 || rec.height() <= 420)
        label.setGeometry((0.45*rec.width())+rec.x(),
                rec.height()+rec.y()-rec.height()*0.06,0.1*rec.width()-2, rec.height()*0.06-2);

    else if(rec.width() <= 640 || rec.height() <= 520)
        label.setGeometry((0.45*rec.width())+rec.x(),
                rec.height()+rec.y()-rec.height()*0.06,0.1*rec.width()-2, rec.height()*0.06-2);

    else if(rec.width() <= 960 || rec.height() <= 620)
        label.setGeometry((0.45*rec.width())+rec.x(),
                rec.height()+rec.y()-rec.height()*0.06,0.1*rec.width()-2, rec.height()*0.06-2);

    else if(rec.width() <= 1280 || rec.height() <= 720)
        label.setGeometry((0.45*rec.width())+rec.x(),
                rec.height()+rec.y()-rec.height()*0.06,0.1*rec.width()-2, rec.height()*0.06-2);

    else
        label.setGeometry (-1,-1,0,0);
}


void ResponsiveLayout::setGeoResultImage(ResponsiveLabel &label ,const QRect &rec, int &count){

    //sets the position of Result Images

    if(rec.width() < rec.height())
        label.setGeometry(5+rec.x()+(count%5)*180, rec.y()+(count/5)*150,
                          180-5, 120);

    else if(rec.width() <= 420 || rec.height() <= 420)
        label.setGeometry(5+rec.x()+(count%5)*180, rec.y()+(count/5)*150,
                          180-5, 120);

    else if(rec.width() <= 640 || rec.height() <= 520)
        label.setGeometry(5+rec.x()+(count%5)*180, rec.y()+(count/5)*150,
                          180-5, 120);

    else if(rec.width() <= 960 || rec.height() <= 620)
        label.setGeometry(5+rec.x()+(count%5)*180, rec.y()+(count/5)*150,
                          180-5, 120);

    else if(rec.width() <= 1280 || rec.height() <= 720)
        label.setGeometry(5+rec.x()+(count%5)*180, rec.y()+(count/5)*150,
                          180-5, 120);

    else
        label.setGeometry (-1,-1,0,0);

    count++;
}


void ResponsiveLayout::setGeoResultText(ResponsiveLabel &label ,const QRect &rec, int &count){

    //sets the position of Result Text

    if(rec.width() < rec.height())
        label.setGeometry(5+rec.x()+(count%5)*180, rec.y()+(count/5)*150+120,
                          180-5, 30-5);
    else if(rec.width() <= 420 || rec.height() <= 420)
        label.setGeometry(5+rec.x()+(count%5)*180, rec.y()+(count/5)*150+120,
                          180-5, 30-5);

    else if(rec.width() <= 640 || rec.height() <= 520)
        label.setGeometry(5+rec.x()+(count%5)*180, rec.y()+(count/5)*150+120,
                          180-5, 30-5);

    else if(rec.width() <= 960 || rec.height() <= 620)
        label.setGeometry(5+rec.x()+(count%5)*180, rec.y()+(count/5)*150+120,
                          180-5, 30-5);

    else if(rec.width() <= 1280 || rec.height() <= 720)
        label.setGeometry(5+rec.x()+(count%5)*180, rec.y()+(count/5)*150+120,
                          180-5, 30-5);
    else
        label.setGeometry (-1,-1,0,0);

    count++;
}


void ResponsiveLayout::setGeoAdvert(ResponsiveLabel &label ,const QRect &rec){

    //sets the position of Adverts

    if(rec.width() <= 420 || rec.height() <= 420)
        label.setGeometry (-1,-1,0,0);

    else if(rec.width() <= 640 || rec.height() <= 520)
        label.setGeometry (-1,-1,0,0);

    else if(rec.width() <= 960 || rec.height() <= 620)
        label.setGeometry((0.8*rec.width())+rec.x(),110+rec.y(),0.2*rec.width(), 0.7*rec.height());

    else if(rec.width() <= 1280 || rec.height() <= 720)
        label.setGeometry((0.8*rec.width())+rec.x(),130+rec.y(),0.2*rec.width(), 0.7*rec.height());
    else
        label.setGeometry (-1,-1,0,0);

}


void ResponsiveLayout::setScrollArea(QScrollArea *area, const QRect &rec){

    //sets the position of Scroll Area

    if(rec.width() <= 420 || rec.height() <= 420)
        area->setGeometry(2+(0.1*rec.width())+rec.x(),90+rec.y(),
                          rec.width()*0.8-4, 0.65*rec.height()-5);

    else if(rec.width() <= 640 || rec.height() <= 520)
        area->setGeometry(2+(0.1*rec.width())+rec.x(),90+rec.y(),
                          rec.width()*0.8-4, 0.70*rec.height()-5);

    else if(rec.width() <= 960 || rec.height() <= 620)
        area->setGeometry(2+(0.1*rec.width())+rec.x(),110+rec.y(),
                          rec.width()*0.7-6, 0.75*rec.height());

    else if(rec.width() <= 1280 || rec.height() <= 720)
        area->setGeometry(2+(0.1*rec.width())+rec.x(),130+rec.y(),
                          rec.width()*0.7-6, 0.75*rec.height());
    else
        area->setGeometry (-1,-1,0,0);

    area->show();
}


// you should probably make extensive changes to this function
void ResponsiveLayout::setGeometry(const QRect &r ) { // our layout should fit inside r

    QLayout::setGeometry(r);
    int resultImage = 0;
    int resultText = 0;

    // for all the Widgets added in ResponsiveWindow.cpp
    for (int i = 0; i < list_.size(); i++) {

        QLayoutItem *o = list_.at(i);

        try {
            // cast the widget to one of our responsive labels

            QScrollArea *area = dynamic_cast<QScrollArea *>(o->widget());
            ResponsiveLabel *label = static_cast<ResponsiveLabel *>(o->widget());


            if (label == NULL) // null: cast failed on pointer
                std::cout << "warning, unknown widget class in layout" << std::endl;

            else if (label -> text() == kNavTabs ) // headers go at the top
                setGeoNavigation(*label,r);

            // only show a search button on small resolution, at the right of the window
            else if(label -> text() == kSQuery)
                setGeoSearchQ(*label,r);

            else if (label -> text() == kHomeLink)
                setGeoHomeLink(*label,r);

            else if (label -> text() == kSButton)
                setGeoSButton(*label,r);

            else if (label -> text() == kShoppingBasket)
                setGeoShopping(*label,r);

            else if (label -> text() == kSignIn)
                setGeoSignIn(*label,r);

            else if (label -> text() == kSOptions)
                setGeoOptions(*label,r);

            else if (label -> text() == kMenu)
                setGeoMenu(*label,r);

            else if (label -> text() == kSForward)
                setGeoSForward(*label,r);

            else if (label -> text() == kSBackward)
                setGeoSBackward(*label,r);

            else if (label -> text() == kAdvert)
                setGeoAdvert(*label,r);

            else if (label -> text() == kPageNumber)
                setGeoPageNumber(*label,r);

            else if (label -> text() == kDeals)
                setGeoDeals(*label,r);

            // fixme: the focus-group did not like this behaviour for the search result element.
            else if (label -> text() == kSResultImage )
                setGeoResultImage(*label,r,resultImage);

            else if (label -> text() == kSResultText )
                setGeoResultText(*label,r,resultText);
            else // otherwise: disappear label by moving out of bounds
                label -> setGeometry (-1,-1,0,0);

            if(area !=NULL){
                setScrollArea(area,r);
            }

        }
        catch (std::bad_cast) {
            // bad_case: cast failed on reference...
            std::cout << "warning, unknown widget class in layout" << std::endl;
        }
    }
}

// following methods provide a trivial list-based implementation of the QLayout class
int ResponsiveLayout::count() const {

    return list_.size();
}

QLayoutItem *ResponsiveLayout::itemAt(int idx) const {

    return list_.value(idx);
}

QLayoutItem *ResponsiveLayout::takeAt(int idx) {

    return idx >= 0 && idx < list_.size() ? list_.takeAt(idx) : 0;
}

void ResponsiveLayout::addItem(QLayoutItem *item) {

    list_.append(item);
}

QSize ResponsiveLayout::sizeHint() const {

    return minimumSize();
}

QSize ResponsiveLayout::minimumSize() const {

    return QSize(320,320);
}

ResponsiveLayout::~ResponsiveLayout() {

    QLayoutItem *item;
    while ((item = takeAt(0)))
        delete item;
}
