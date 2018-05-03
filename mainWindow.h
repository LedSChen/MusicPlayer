#pragma once

#include<QtWidgets>
#include<QtMultimedia\qmediaplayer.h>
#include"newButton.h"
#include"volbutton.h"


class mainWindow : public QWidget{

	//ʹ���źźͲ�
	Q_OBJECT

	//����mini������Ϊ�����������Ԫ�࣬�Ӷ����Ե������������˽�к�����˽�ж���
	friend class miniWindow;

protected:
	void mousePressEvent(QMouseEvent *);
	void mouseMoveEvent(QMouseEvent *);
	void mouseReleaseEvent(QMouseEvent *);

private:
	void initUI();

	//��갴�µĳ�ʼλ��
	QPoint lastPoint;
	QPoint offset;
	bool isDrag;

	//����
	QLabel *songName;
	//����
	QLabel *songSinger;
	//����ר��
	QLabel *songAlbum;
	//����ʱ�����
	QLabel *songTime;
	//ר��ͼƬ
	QLabel *albumImage;

	//�˳�
	newButton *exitMainWindow;
	//�л�mini����
	newButton *toMiniWindow;
	//���ش���
	newButton *hideMainWindow;
	//��������Ϣ
	newButton *developerInf;
	//�����ļ�
	newButton *addFile;
	//��ʾ���
	newButton *showLrc;
	//��һ��
	newButton *lastSong;
	//��ͣ
	newButton *pause;
	//��һ��
	newButton *nextSong;
	
	//����ģʽ
	newButton *playModeBar;
	QMenu *playMode;
	//����ѭ��
	QAction *single;
	//�б�ѭ��
	QAction *listCircle;
	//�������
	QAction *listRandom;
	//������ť
	VolButton *volSetting;


	//�����б�
	QTableWidget *playlistTable;

	//����ý���б�
	QMediaPlayer *mediaplayer;

	//������
	QSlider *playSlider;

	//��������,��Ҫ�����µ��࣬����ɼ�
	QSlider *volSlider;





public:
	explicit mainWindow(QWidget *parent = 0);
	~mainWindow();

private slots:
	
	




};