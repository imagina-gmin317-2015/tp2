README
======

Ce TP permet de voir comment travailler avec QTimer, avoir une classe Camera séparé du reste du code et avoir plusieurs instance du "jeu" qui partage la même camera et les mêmes inputs.


Question 1:
----------

Touche A: Permet d'incrémenter le paramètre rotX
Touche Z: Permet d'incrémenter le paramètre ss
Touche E: Permet de décrementer le paramètre rotX
Touche Q: Permet d'incrémenter le paramètre rotY
Touche S: Permet de décrément le paramètre ss
Touche W: Permet de changer d’etat
Touche X: Permet de changer de carte (on change l’image qui permet de générer la carte)

Paramètre état: Permet de switcher entre les 6 affichage de la carte, on peut afficher la carte avec des points, des lignes, des triangles, des trianglesC (?), des triangles avec texture ou des triangles avec texture et des lignes.
Parametre ss: Permet de scaler les objets presents dans la scene, c’est a dire les agrandir. Ceci est fait de maniere homonege.
Paramètre rotX: Utilisé dans glRotate pour tourner la scène sur l’axe X
Paramètre rotY: Utilisé dans glRotate pour tourner la scène sur l’axe Y
