#ifndef ROMANCECLUB_H
#define ROMANCECLUB_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QMap>
#include <QSet>
#include <QPushButton>
#include <QJsonArray>

class QStackedWidget;
class QLabel;
class QVBoxLayout;

class RomanceClub : public QMainWindow
{
    Q_OBJECT

public:
    explicit RomanceClub(QWidget *parent = nullptr);
    ~RomanceClub();

private slots:
    void startGame();
    void restartGame();

private:
    void setupAudio();
    void setupWelcomeScreen();
    void setupGameScreen();
    void setupEndingScreen();
    void loadGameData();
    void showNextScene();
    void showEnding(const QJsonObject& ending);
    void updateStats(const QJsonObject& consequences);
    QJsonObject findSceneById(const QString& sceneId);

    QStackedWidget *stack;
    QMediaPlayer *mediaPlayer;

    QWidget *welcomeScreen;
    QWidget *gameScreen;
    QWidget *endingScreen;

    QLabel *backgroundLabel;
    QLabel *characterLabel;
    QLabel *textLabel;
    QLabel *statsLabel;
    QLabel *endingBackground;
    QLabel *endingTitle;
    QLabel *endingText;

    QVBoxLayout *choicesLayout;
    QPushButton *restartButton;

    QMap<QString, QString> characterImages;
    QMap<QString, int> stats;
    QSet<QString> madeChoices;

    QJsonArray storyScenes;
    QJsonArray endings;
    QString currentSceneId;
};

#endif // ROMANCECLUB_H
