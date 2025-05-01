#ifndef ROMANCECLUB_H
#define ROMANCECLUB_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QJsonArray>
#include <QHash>
#include <QSet>
#include <QMediaPlayer>
#include <QAudioOutput>

class QLabel;
class QPushButton;
class QVBoxLayout;

class RomanceClub : public QMainWindow
{
    Q_OBJECT

public:
    explicit RomanceClub(QWidget *parent = nullptr);
    ~RomanceClub();

private slots:
    void startGame();
    void showNextScene();
    void showEnding(const QJsonObject& ending);
    void restartGame();

private:
    QSet<QString> madeChoices;

    void setupWelcomeScreen();
    void setupGameScreen();
    void setupEndingScreen();
    void loadGameData();
    QJsonObject findSceneById(const QString& sceneId);
    void updateStats(const QJsonObject& consequences);
    void setupAudio();

    QStackedWidget *stack;
    QWidget *welcomeScreen;
    QWidget *gameScreen;
    QWidget *endingScreen;

    QLabel *backgroundLabel;
    QLabel *characterLabel;
    QLabel *textLabel;
    QLabel *statsLabel;
    QVBoxLayout *choicesLayout;

    QLabel *endingBackground;
    QLabel *endingTitle;
    QLabel *endingText;
    QPushButton *restartButton;

    QJsonArray storyScenes;
    QJsonArray endings;
    QString currentSceneId;
    QHash<QString, QString> characterImages;
    QHash<QString, int> stats;

    QMediaPlayer *mediaPlayer;
    QAudioOutput *audioOutput;
};
