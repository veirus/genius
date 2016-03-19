#ifndef CLIPBOARDITEM_H
#define CLIPBOARDITEM_H

#include <QClipboard>
#include <QImage>
#include <QList>
#include <QUrl>
#include <QMimeData>
#include <QTime>

class ClipboardItem
{
public:
  static int clipboardItemRef;
  enum ClipboardMimeType{Image,Text,URLs};

  ClipboardItem();
  ClipboardItem(QClipboard *clipboard);
  ~ClipboardItem();

  //getters
  QImage *image();
  QString *text();
  QList<QUrl> *urls();
  const QTime *addedTime();
  ClipboardMimeType type();
  const int &ref();

  //setters
  void image(QImage &image);
  void text(QString &tex);
  void urls(QList<QUrl> &url);

  //functions
  void setContent(QClipboard *clipboard);

private:
  ClipboardMimeType _type;

  //private fealds
  QImage *_image=NULL;
  QString *_text=NULL;
  QString *_html=NULL;
  QList<QUrl> *_urls=NULL;
  QTime _addedTime;
  int _ref;
  bool _pinned;

  //private functions
  void setTimeToNow();
};

#endif // CLIPBOARDITEM_H


//enum ClipboardMimeType{Image,Text,Html,URLs};

//ClipboardItem();
//ClipboardItem(QClipboard *clipboard);
//~ClipboardItem();

//void setContent(QClipboard *clipboard);

//QImage *image();
//QString *text();
//QString *html();
//QList<QUrl> *urls();
//QTime *addedTime();
//ClipboardMimeType type();
//int ref();

//void image(QImage &image);
//void text(QString &tex);
//void urls(QList<QUrl> &url);
//void html(QString &htm);

//void pin();
//void unpin();
//bool pinned();

//private:
//ClipboardMimeType _type;

//QImage *_image=NULL;
//QString *_text=NULL;
//QString *_html=NULL;
//QList<QUrl> *_urls=NULL;
//QTime _addedTime;
//int _ref;
//bool _pinned;

//void setTimeToNow();
