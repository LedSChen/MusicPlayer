#pragma once

#include<QtWidgets>
#include<QtMultimedia\qmediaplayer.h>
#include<QtMultimedia\qmediaplaylist.h>
#include<QtMultimedia\qmediametadata.h>
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
	void initPlayer();
	void initConnection();

	

	QPoint startPoint;
	QPoint windowPoint;
	bool isDrag;

	QStringList playList;

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

	//����ļ�
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

	//����ý��
	QMediaPlayer *mediaPlayer;

	//ý���б�
	QMediaPlaylist *mediaList;

	//������
	QSlider *playSlider;

	//��������,��Ҫ�����µ��࣬����ɼ�
	QSlider *volSlider;




private slots:

	//����ļ�
	void f_addFile();

	//��ʾ���
	void f_showLrc();

	//��һ��
	void f_lastSong();

	//��ͣ���߲���
	void f_pause();

	//��һ��
	void f_nextSong();

	//˫���б���
	void tablePlay(int,int);
	
	//��������
	void setPlayerVolumn(int);

	//����Label��ǩ
	void updateLabel();

public:

	explicit mainWindow(QWidget *parent = 0);
	~mainWindow();


};