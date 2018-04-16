const TelegramBot = require('node-telegram-bot-api');

const token = '561305365:AAG_QI3apu0NXn70gzNGzrwjRZqjf30UG6I';
var idChar = 502838104;

var serialport = require("serialport");
var miSerial = new serialport("COM3", {baudRate: 9600, autoOpen: true});

const bot = new TelegramBot(token, {polling: true});

miSerial.setEncoding('utf8');

x =0;
 max = 0;
 min = 10;
miSerial.on('data', function(data){
  if (data[0] == '0'){
    console.log("El valor es 0");
    bot.sendMessage(idChar, "El valor es 0");
  }else if (data[0] == '1'){
    console.log("El valor es 1");
    bot.sendMessage(idChar, "El valor es 1");
    x = 1;
  }else if (data[0] == '2'){
    console.log("El valor es 2");
    bot.sendMessage(idChar, "El valor es 2");
    x = 2;
  }else if (data[0] == 'El valor es 3'){
    console.log("3");
    bot.sendMessage(idChar, "El valor es 3");
    x = 3;
  }
