/*
 * ddmzoneswidget.cpp
 * This file is part of FoscamCGIInterface
 *
 * Copyright (C) 2017-2017 Ludovic Girardet
 *
 * FoscamCGIInterface is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * FoscamCGIInterface is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Foobar.  If not, see <http://www.gnu.org/licenses/>
 *
 */

#ifndef DDMZONESWIDGET_H
#define DDMZONESWIDGET_H

#include <QWidget>
#include <QImage>
#include <QMouseEvent>

class DDMZonesWidget : public QWidget
{
    Q_OBJECT
public:
    explicit DDMZonesWidget(QImage P_Fond, int* P_ListeZones, QWidget *parent = nullptr);
    void MajListeZones(int* P_ListeZones);
    void GetListeZones(int* P_ListeZones);

private:
    QImage Fond;
    int ListeZones[10];

protected:
    void paintEvent(QPaintEvent *event);
    void mouseReleaseEvent( QMouseEvent * event );
signals:

};

#endif // DDMZONESWIDGET_H
