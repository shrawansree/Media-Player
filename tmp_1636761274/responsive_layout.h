//
// Created by twak on 07/10/2019.
//

#ifndef RESPONSIVELAYOUT_H
#define RESPONSIVELAYOUT_H

#include <QtGui>
#include <QList>
#include <QLayout>
#include <QScrollArea>
#include "responsive_label.h"

class ResponsiveLayout : public QLayout {

public:
    ResponsiveLayout(): QLayout() {}
    ~ResponsiveLayout();

    // standard functions for a QLayout
    void setGeoNavigation(ResponsiveLabel &label ,const QRect &rec);
    void setGeoSearchQ(ResponsiveLabel &label ,const QRect &rec);
    void setGeoHomeLink(ResponsiveLabel &label ,const QRect &rec);
    void setGeoShopping(ResponsiveLabel &label ,const QRect &rec);
    void setGeoSignIn(ResponsiveLabel &label ,const QRect &rec);
    void setGeoOptions(ResponsiveLabel &label ,const QRect &rec);
    void setGeoMenu(ResponsiveLabel &label ,const QRect &rec);
    void setGeoSButton(ResponsiveLabel &label ,const QRect &rec);
    void setGeoSForward(ResponsiveLabel &label ,const QRect &rec);
    void setGeoSBackward(ResponsiveLabel &label ,const QRect &rec);
    void setGeoDeals(ResponsiveLabel &label ,const QRect &rec);
    void setGeoPageNumber(ResponsiveLabel &label ,const QRect &rec);
    void setGeoAdvert(ResponsiveLabel &label ,const QRect &rec);
    void setScrollArea(QScrollArea *area ,const QRect &rec);
    void setGeoResultImage(ResponsiveLabel &label ,const QRect &rec, int &count);
    void setGeoResultText(ResponsiveLabel &label ,const QRect &rec, int &count);


    void setGeometry(const QRect &rect);

    void addItem(QLayoutItem *item);
    QSize sizeHint() const;
    QSize minimumSize() const;
    int count() const;
    QLayoutItem *itemAt(int) const;
    QLayoutItem *takeAt(int);

private:
    QList<QLayoutItem*> list_;
};
#endif // RESPONSIVELAYOUT_H
