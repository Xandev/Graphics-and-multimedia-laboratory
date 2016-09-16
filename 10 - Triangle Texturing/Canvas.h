#ifndef CANVAS_H
#define CANVAS_H

#include <QPainter>
#include <QImage>

#include "Marker.h"

class MainWindow;

class Canvas
{
public:
    Canvas(MainWindow* mainWindow, int x, int y, int width, int height);

    ~Canvas();

    void draw();

    void drawPixel(int x, int y, QRgb color);

    void drawImage(QImage* image);

    void drawMarker(Marker* marker);

    void drawTexture(QImage* texture, const QList<Marker>& markers, const QList<Marker>& markers2);

    void reset();

    bool isIntersect(int x, int y);

    QImage* getImage() const {
        return _image;
    }

    int getX() const {
        return _x;
    }

    int getY() const {
        return _y;
    }

    int getWidth() const {
        return _image->width();
    }

    int getHeight() const {
        return _image->height();
    }

private:
    MainWindow* _mainWindow;
    QImage* _image;
    int _x;
    int _y;
};

#endif // CANVAS_H
