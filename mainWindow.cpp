#include"mainWindow.h"

void mainWindow::initUI() {
	
	//背景色
	QPalette palette;
	palette.setColor(QPalette::Background, QColor(221,230,240));
	this->setPalette(palette);
	//无边框
	setWindowFlags(Qt::FramelessWindowHint);
	//半透明
	setWindowOpacity(0.9);


	//第一行布局
	exitMainWindow = new newButton();
	exitMainWindow->set_Button_Icons(QIcon("Resources/exit.png"), QIcon("Resources/exit2.png"));
	exitMainWindow->setIconSize(QSize(25, 25));
	exitMainWindow->setStyleSheet("QPushButton{background-color:rgba(255,255,255,0);border-style:solid;border-width:0px;border-color:rgba(255,255,255,0);}"
	);
	toMiniWindow = new newButton();
	toMiniWindow->set_Button_Icons(QIcon("Resources/mini.png"), QIcon("Resources/mini2.png"));
	toMiniWindow->setIconSize(QSize(25, 25));
	toMiniWindow->setStyleSheet("QPushButton{background-color:rgba(255,255,255,0);border-style:solid;border-width:0px;border-color:rgba(255,255,255,0);}"
	);
	hideMainWindow = new newButton();
	hideMainWindow->set_Button_Icons(QIcon("Resources/small.png"), QIcon("Resources/small2.png"));
	hideMainWindow->setIconSize(QSize(25, 25));
	hideMainWindow->setStyleSheet("QPushButton{background-color:rgba(255,255,255,0);border-style:solid;border-width:0px;border-color:rgba(255,255,255,0);}"
	);
	developerInf = new newButton();

	developerInf->setObjectName(QStringLiteral("logoButton"));
	developerInf->set_Button_Icons(QIcon("Resources/logo.png"), QIcon("Resources/logo2.png"));
	developerInf->setIconSize(QSize(120, 48));
	developerInf->setStyleSheet("QPushButton{background-color:rgba(255,255,255,0);border-style:solid;border-width:0px;border-color:rgba(255,255,255,0);}"
	);

	QHBoxLayout *firstlineBox1 = new QHBoxLayout();
	QHBoxLayout *firstlineBox2 = new QHBoxLayout();
	QHBoxLayout *firstlineBox = new QHBoxLayout();
	firstlineBox1->addWidget(developerInf);
	firstlineBox1->setContentsMargins(QMargins(0, 0, 100, 0));
	firstlineBox2->addWidget(hideMainWindow);
	firstlineBox2->addWidget(toMiniWindow);
	firstlineBox2->addWidget(exitMainWindow);
	firstlineBox->addLayout(firstlineBox1);
	firstlineBox->addLayout(firstlineBox2);

	//第二行布局
	albumImage = new QLabel();
	QPixmap *albumjpg = new QPixmap();
	albumjpg->load("Resources/default_album.jpg");
	//调整专辑图片大小
	QPixmap fitpixmap = albumjpg->scaled(100, 100, Qt::KeepAspectRatioByExpanding);
	albumImage->setPixmap(fitpixmap);
	albumImage->setStyleSheet("QLabel{margin-left:20px}");
	songName = new QLabel(tr("aaa"));
	songSinger = new QLabel(tr("bbb"));
	songAlbum = new QLabel(tr("bbb"));

	QVBoxLayout *secondlineBox1 = new QVBoxLayout();
	QHBoxLayout *secondlineBox = new QHBoxLayout();
	secondlineBox1->addWidget(songName);
	secondlineBox1->addWidget(songSinger);
	secondlineBox1->addWidget(songAlbum);
	secondlineBox->addWidget(albumImage);
	secondlineBox->addLayout(secondlineBox1);
	secondlineBox->setContentsMargins(QMargins(0, 20, 0, 0));


	//第三行布局
	QHBoxLayout *thridlineBox = new QHBoxLayout();
	playSlider = new QSlider(Qt::Horizontal);
	songTime = new QLabel(tr("00:00"));

	thridlineBox->addWidget(playSlider);
	thridlineBox->addWidget(songTime);
	thridlineBox->setContentsMargins(QMargins(10, 30, 10, 0));


	//第四行布局
	QHBoxLayout *forthlineBox = new QHBoxLayout();
	addFile = new newButton();
	addFile->set_Button_Icons(QIcon("Resources/addSong.png"), QIcon("Resources/addSong2.png"));
	addFile->setIconSize(QSize(30, 30));
	addFile->setStyleSheet("QPushButton{background-color:rgba(255,255,255,0);border-style:solid;border-width:0px;border-color:rgba(255,255,255,0);}"
		"QPushButton{margin-left:5px;}"
	);
	showLrc = new newButton();
	showLrc->set_Button_Icons(QIcon("Resources/showLrc.png"), QIcon("Resources/showLrc2.png"));
	showLrc->setIconSize(QSize(30, 30));
	showLrc->setStyleSheet("QPushButton{background-color:rgba(255,255,255,0);border-style:solid;border-width:0px;border-color:rgba(255,255,255,0);}"
		"QPushButton{margin-left:5px;}"
	);
	lastSong = new newButton();
	lastSong->set_Button_Icons(QIcon("Resources/lastSong.png"), QIcon("Resources/lastSong2.png"));
	lastSong->setIconSize(QSize(30, 30));
	lastSong->setStyleSheet("QPushButton{background-color:rgba(255,255,255,0);border-style:solid;border-width:0px;border-color:rgba(255,255,255,0);}"
		"QPushButton{margin-left:5px;}"
	);
	pause = new newButton();
	pause->set_Button_Icons(QIcon("Resources/play.png"), QIcon("Resources/play2.png"));
	pause->setIconSize(QSize(60, 60));
	pause->setStyleSheet("QPushButton{background-color:rgba(255,255,255,0);border-style:solid;border-width:0px;border-color:rgba(255,255,255,0);}"
		"QPushButton{margin-left:5px;}"
	);
	nextSong = new newButton();
	nextSong->set_Button_Icons(QIcon("Resources/nextSong.png"), QIcon("Resources/nextSong2.png"));
	nextSong->setIconSize(QSize(30, 30));
	nextSong->setStyleSheet("QPushButton{background-color:rgba(255,255,255,0);border-style:solid;border-width:0px;border-color:rgba(255,255,255,0);}"
		"QPushButton{margin-left:2px;}"
	);
	playMode = new QMenu();
	playModeBar = new newButton();
	playModeBar->set_Button_Icons(QIcon("Resources/playModeBar.png"), QIcon("Resources/playModeBar2.png"));
	playModeBar->setIconSize(QSize(30, 30));
	playModeBar->setStyleSheet(
		"QPushButton{background-color:rgba(255,255,255,0);border-style:solid;border-width:0px;border-color:rgba(255,255,255,0);}"
		"QPushButton::menu-indicator{image:none;}"
		"QPushButton{margin-left:5px;}"
	);
	single = new QAction("single");
	listCircle = new QAction("listCircle");
	listRandom = new QAction("listRandom");
	playMode->addAction(single);
	playMode->addAction(listCircle);
	playMode->addAction(listRandom);
	playModeBar->setMenu(playMode);
	volSetting = new VolButton();
	
	forthlineBox->addWidget(addFile);
	forthlineBox->addWidget(showLrc);
	forthlineBox->addWidget(lastSong);
	forthlineBox->addWidget(pause);
	forthlineBox->addWidget(nextSong);
	forthlineBox->addWidget(playModeBar);
	forthlineBox->addWidget(volSetting);
	forthlineBox->setContentsMargins(QMargins(0, 20, 0, 0));


	//第五行布局
	playlistTable = new QTableWidget();
	playlistTable->setObjectName(QStringLiteral("playlistTable"));
	QVBoxLayout *fifthlineBox = new QVBoxLayout();
	fifthlineBox->addWidget(playlistTable);
	fifthlineBox->setContentsMargins(QMargins(0, 20, 0, 10));
	//playlistTable->setStyleSheet("QTableWidget{margin-top:20px;margin-buttom:20px;background:rgb(221,230,240)}");
	

	//总布局
	QVBoxLayout *totalBox = new QVBoxLayout();
	totalBox->addLayout(firstlineBox);
	totalBox->addLayout(secondlineBox);
	totalBox->addLayout(thridlineBox);
	totalBox->addLayout(forthlineBox);
	totalBox->addLayout(fifthlineBox);
	setLayout(totalBox);
	
}

mainWindow::~mainWindow()
{

}


mainWindow::mainWindow(QWidget *parent) :QWidget(parent){

	/*初始化各个模块*/
	initUI();

}


int qqq = 1;
void mainWindow::mousePressEvent(QMouseEvent *e) {
	if (e->button() == Qt::LeftButton)
	{
		isDrag = true;
		offset = e->globalPos() - frameGeometry().topLeft();

	}
}

void mainWindow::mouseMoveEvent(QMouseEvent *e) {
	if (e->buttons() & Qt::LeftButton) {
		setCursor(Qt::PointingHandCursor);
		//实现移动操作
		move(e->globalPos() - offset);
	}
}

void mainWindow::mouseReleaseEvent(QMouseEvent *) {
	isDrag = false;
}
