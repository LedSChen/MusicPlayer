#pragma once

#include<QtWidgets>
#include<QtMultimedia\qmediaplayer.h>
#include"newButton.h"
#include"volbutton.h"


class mainWindow : public QWidget{

	//使用信号和槽
	Q_OBJECT

	//设置mini窗口类为主窗口类的友元类，从而可以调用主窗口类的私有函数和私有对象
	friend class miniWindow;

protected:
	void mousePressEvent(QMouseEvent *);
	void mouseMoveEvent(QMouseEvent *);
	void mouseReleaseEvent(QMouseEvent *);

private:
	void initUI();

	//鼠标按下的初始位置
	QPoint lastPoint;
	QPoint offset;
	bool isDrag;

	//歌名
	QLabel *songName;
	//歌手
	QLabel *songSinger;
	//歌曲专辑
	QLabel *songAlbum;
	//歌曲时间进度
	QLabel *songTime;
	//专辑图片
	QLabel *albumImage;

	//退出
	newButton *exitMainWindow;
	//切换mini窗口
	newButton *toMiniWindow;
	//隐藏窗口
	newButton *hideMainWindow;
	//开发者信息
	newButton *developerInf;
	//添加文件
	newButton *addFile;
	//显示歌词
	newButton *showLrc;
	//上一首
	newButton *lastSong;
	//暂停
	newButton *pause;
	//下一首
	newButton *nextSong;
	
	//播放模式
	newButton *playModeBar;
	QMenu *playMode;
	//单曲循环
	QAction *single;
	//列表循环
	QAction *listCircle;
	//随机播放
	QAction *listRandom;
	//声音按钮
	VolButton *volSetting;


	//音乐列表
	QTableWidget *playlistTable;

	//音乐媒体列表
	QMediaPlayer *mediaplayer;

	//进度条
	QSlider *playSlider;

	//音量调节,需要定义新的类，点击可见
	QSlider *volSlider;





public:
	explicit mainWindow(QWidget *parent = 0);
	~mainWindow();

private slots:
	
	




};