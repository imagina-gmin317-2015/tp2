# TP2 - Vincent BAZIA

## Question 1
* Z augmente et S diminue la taille (scale)
* A et E font tourner sur l'axe X
* Q et D font tourner sur l'axe Y
* W change les options d'affichage du monde
* X change la heightmap

* ss est la valeur du scale
* rotX la rotation sur l'axe x
* rotY la rotation sur l'axe y

Camera : On a mis ces attribues dans une classe à part "Camera" (camera.cpp)

## Question 2

Affichage à un timestep défini : ok (gamewindow.cpp)

## Question 3

Génération de quatre fenêtres avec différents FPS : OK (main.cpp)

## Question 4

J'ai ajouté un attribue booleen dans la caméra pour savoir si elle doit tourner automatiquement ou non. Appuyer sur C alterne ce booleen qui active ou non l'autorotation.

## Question 5

Ajout de :
* P : multiplication par 2 de la fréquence d'affichage
* M : division par 2 de la fréquence d'affichage

il faut penser à stoper et relancer le QTimer.

Lorsque l'on change la fréquence, l'affichage est plus ou moins fluide.

## Bonus

* GameWindow hérite de OpenGLWindow afin de pouvoir afin de pouvoir afficher une fenêtre et son contenu directement et de récupérer les événements.
* Avantages : Gestion direct de l'affichage et de la gestion des événements.
* Désavantage : Brouillon ?

On peut éviter cet héritage en instanciant un OpenGLWindow dans GameWindow auquel on passe les informations d'affichage.


