# StepperMotor_A4988

## Overview
StepperDriverライブラリ（Arduino）と, ステッピングモータードライバモジュールA4988を用いた, バイポーラ型ステッピングモーターの制御

## Description
[参考サイト](https://iot.keicode.com/arduino/arduino-stepper-motor-a4988.php?utm_source=pocket_mylist)
【Hardware】  
想定するステッピングモーターの主な仕様  
▪バイポーラタイプ  
▪相数： 2  
▪一回転ステップ角： 200  
[例](https://akizukidenshi.com/catalog/g/gP-05372/)  
<br>
マイコンはArduino（ココでは, Arduino Uno R3）を想定  
但しココでは, Arduino IDEのインストール方法については扱わない

## Install
### StepperDriverライブラリのインストール方法（for Mac）  
デフォルトで入っているライブラリではないので, まずはインストールする  
  1. 画面上部, 「スケッチメニュー」から「ライブラリをインクルード」を選択  
  2. 「ライブラリを管理...」から表示された画面上の検索窓で「A4988」と入力  
  3. 「StepperDriver」と表示されているライブラリをインストール  
  
### Include Library
  上記でインストールは完了したので, 次はライブラリをコードとしてインクルードする
  1. 画面上部, 「スケッチメニュー」から「ライブラリをインクルード」を選択  
  2. 「StepperDriver」というのがあるので選択  
  以上でStepperDriverライブラリの導入は完了

## Circuit

  
