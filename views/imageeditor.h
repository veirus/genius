#ifndef IMAGEEDITOR_H
#define IMAGEEDITOR_H

#include <QDialog>
#include <QImage>
#include <QShowEvent>
#include <QGraphicsScene>
#include <QFileDialog>
#include <QMessageBox>

namespace Ui {
class ImageEditor;
}

class ImageEditor : public QDialog
{
  Q_OBJECT

public:
  explicit ImageEditor(QImage *image, QWidget *parent = 0);
  ~ImageEditor();

private slots:
  void on_okButton_clicked();

  void on_cancelButton_clicked();

  void on_exportButton_clicked();

  void on_replaceButton_clicked();

private:
  Ui::ImageEditor *ui;
  QImage *_image;
  QImage _image_backup;

  void initializeView();

  void showEvent(QShowEvent *event);
  void fixFileNameExtension(QString *fileName, QString mimeType);
};

#endif // IMAGEEDITOR_H
