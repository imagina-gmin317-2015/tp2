# tp2

L'objet Camera est constitué de l'angle de rotation de la camera sur l'axe des x et l'axe des y ainsi que du scale.
Des méthodes permettent d'accéder à ces attributs pour les lire ou les modifier.
La méthode rotation() fait tourner la camera sur l'axe des y (en faisant appel à une sous-méthode rotate()). La fonction scale() de caméra permet de zoomer ou dezoomer la scene. Ces méthodes font appel aux fonctions glrotatef() et glScalef() d'opengl.

L'objet Camera est un attribut de gamewindow qui est utilisé dès que l'on veut modifier la camera (en faisant appel à ses méthodes).

Pour permettre une gestion de la fréquence d'échantillonnage, on utilise l'objet QTimer. Cet objet est initialisé dans la fonction initialize() de gamewindow durant laquelle on indique que la fonction renderNow() doit être appeler selon ce Timer.
La fonction start() permet de fixer la fréquence d'échantillonnage et de lancer le timer.

