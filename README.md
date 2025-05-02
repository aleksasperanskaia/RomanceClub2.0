![RomanceClub](https://github.com/user-attachments/assets/b2b7e3fa-ebc9-40f7-95a4-9066f993a15d)

# Romance Club Visual Novel
 **Интерактивная визуальная новелла с ветвящимся сюжетом**

## О проекте
**Romance Club** — это визуальная новелла, в которой каждый твой выбор влияет на развитие событий.

## Структура проекта

![image](https://github.com/user-attachments/assets/3b38a610-9fe4-4c67-8a7a-2fd47647d085)

## Редактирование сценария
Файл story.json содержит всю историю.
Как добавить новую сцену:
1. Создайте изображение фона в папке /resources/backgrounds.
2. Добавьте описание сцены в файл story.json.
3. Укажите пути к изображениям в файл romanceclub.qrc.

## Музыка
Есть музыка. Установите модуль мультимедии для QT 5. 

## Требования

Qt5 (установленный и настроенный).
Компилятор C++ (GCC, MSVC или Clang).
Qt Creator (рекомендуется для удобной разработки).

## 📥 Установка и запуск  

### Windows  
 Скачайте готовый `.e из релизов. 
 Запустите файл и играйте!  

### Linux  
1. Установите зависимости:  
   ```bash
   sudo apt update
   sudo apt install qtbase5-dev qt5-make
   sudo apt install qtmultimedia5-dev
   ```
2. Склонируйте репозиторий:  
   ```bash
   git clone https://github.com/RomanceClub2.0/RomanceClubv2
   ```
3. Зайдите в папку проекта.  
   ```bash
   cd RomanceClubv2
   ```
4. Введите следующие команды.
   ```bash
   qmake RomanceClubv2.pro
   make
   ./RomanceClubv2
   ```
### Linux (Сборка через Qt Creator)
1. Откройте RomanceClubv2.pro
2. Нажмите на Run(или Ctrl+R)
3. При необходимости установите multidedia
   ```bash
   sudo apt update
   sudo apt install qtbase5-dev qt5-make
   sudo apt install qtmultimedia5-dev
   ```
---
