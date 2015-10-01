*Thibaut Castanié - M2 IMAGINA - Moteur de Jeux*

# Compte rendu de TP2

## Question 1

Les touches **Z** et **S** permettent de, respectivement, zoomer et dézoomer sur la structure. Les touches **Q** et **D** permettent d'effectuer une rotation autour de l'axe y de la hauteur. Les touches **A** et **E** permettent d'effectuer une rotation de la caméra par rapport à l'axe x des abcisses. La touche **W** permet de modifier le type d'affichage, en utilisant des triangles, des points et des couleurs. Enfin, la touche **X** permet de changer la *heightmap* en entrée.

Le paramètre **ss** permet de gérer la valeur du zoom, **rotX** et **rotY** sont les valeurs de la rotation sur, respectivement, l'axe x et l'axe y.

## Question 5

Lorsque la fréquence est changée, je pense que la mise à jour de la scène est plus (ou moins) rapide, et l'espace entre chaque *frame* est réduit (ou agrandit). Possédant une machine avec une puissance de calcul plutôt faible, la différence n'est pas facile à discerner.

## Bonus

***GameWindow*** hérite de ***OpenGLWindow*** pour récupérer directement les fonctions de cette dernière et afficher rapidement une fenêtre dans la vue. 

D'un côté cela permet de gérer facilement l'affichage et les *events* clavier, de l'autre cela augmente les temps de calcul et n'est donc pas très optimal pour un exercice où la fréquence d'affichage rentre en compte.

Il faudrait utiliser directement ***OpenGLWindow*** dans notre classe et lui passer en paramètres les informations nécessaires à l'affichage.