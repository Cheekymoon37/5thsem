clc
close all
clear all
A=imread('carnation.png');
subplot(1,2,1);
imshow(A)
title('Color Image of Flower')
B=rgb2gray(A);
#figure
subplot(1,2,2);
imshow(B)
title('GrayScale Image of Flower')
