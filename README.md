<img src= "https://github.com/Mathieu7483/Aiko78-Photgraphy/blob/main/holberton%20modif.png">

# 📚 holbertonschool-low_level_programming : Immersion dans le C de Bas Niveau

Bienvenue dans mon dépôt **`holbertonschool-low_level_programming`** ! Ce répertoire est le point de départ de mon parcours d'apprentissage intensif du langage C, en mettant l'accent sur la programmation de bas niveau. Il compile l'ensemble des projets et exercices réalisés dans le cadre de ma formation, depuis les fondamentaux jusqu'aux concepts plus avancés.

Mon objectif à travers ces projets est de développer une compréhension profonde de la manière dont les programmes fonctionnent "sous le capot", en explorant la mémoire, la compilation et les interactions directes avec le système.

# 🌳 Projet : Les Arbres Binaires en C
Ce projet vise à implémenter les opérations fondamentales sur les arbres binaires en C. Il s'agit d'une introduction aux structures de données arborescentes, essentielle pour comprendre des algorithmes plus complexes et optimisés.

# 📚 Table des Matières
[Contexte et Objectifs du Projet](https://github.com/Mathieu7483/holbertonschool-binary_trees#-contexte-et-objectifs-du-projet)

[Ressources et Apprentissages Clés](https://github.com/Mathieu7483/holbertonschool-binary_trees#-ressources-et-apprentissages-cl%C3%A9s)

[Exigences Générales](https://github.com/Mathieu7483/holbertonschool-binary_trees#-exigences-g%C3%A9n%C3%A9rales)

[Structures de Données Utilisées](https://github.com/Mathieu7483/holbertonschool-binary_trees#-structures-de-donn%C3%A9es-utilis%C3%A9es)

[Tâches Réalisées](https://github.com/Mathieu7483/holbertonschool-binary_trees#-t%C3%A2ches-r%C3%A9alis%C3%A9es)

[Compilation](https://github.com/Mathieu7483/holbertonschool-binary_trees#%EF%B8%8F-compilation)

[Auteur](https://github.com/Mathieu7483/holbertonschool-binary_trees#%EF%B8%8F-auteur)

# 💡 Contexte et Objectifs du Projet
Les arbres binaires permettent de stocker des données de manière hiérarchique, ce qui peut offrir des avantages de performance significatifs par rapport aux listes chaînées ou aux tableaux. Ce projet couvre les concepts de base pour maîtriser ces structures.

Les objectifs d'apprentissage sont les suivants :

Arbre Binaire vs. Arbre Binaire de Recherche (BST) : Comprendre la distinction et les règles qui régissent un BST.

Complexité Temporelle : Saisir le gain de temps potentiel par rapport aux listes chaînées.

Propriétés des Arbres : Définir la profondeur, la hauteur, et la taille d'un arbre binaire.

Parcours d'Arbres : Connaître et implémenter les différentes méthodes de parcours (pré-ordre, in-ordre, post-ordre).

Types d'Arbres : Distinguer un arbre binaire complet, plein, parfait et équilibré.

L'objectif est d'être capable d'expliquer ces concepts sans l'aide de Google.

# 📚 Ressources et Apprentissages Clés
Ce projet s'appuie sur les ressources suivantes pour une solide compréhension :

Arbres Binaires : Introduction aux arbres, aux nœuds, aux racines et aux feuilles.

Parcours d'Arbres : Étude des algorithmes de parcours en pré-ordre, in-ordre et post-ordre.

Arbres Binaires de Recherche : Compréhension de leurs propriétés et de leurs avantages.

Pages man : Utilisation de la documentation pour les fonctions standard de la bibliothèque C.

# ✅ Exigences Générales
Ce projet est soumis aux exigences rigoureuses suivantes :

Éditeurs Autorisés : vi, vim, emacs.

Environnement de Compilation : Ubuntu 20.04 LTS.

Compilateur C : gcc, avec les options -Wall -Werror -Wextra -pedantic -std=gnu89.

Fin de Fichier : Tous les fichiers doivent se terminer par une nouvelle ligne.

Fichier README.md : Obligatoire à la racine du dépôt.

Style de Code : Strict respect du style Betty.

Variables Globales : Interdites.

Nombre de Fonctions par Fichier : Maximum 5 fonctions par fichier.

Fichiers main.c : Les fichiers de test ne doivent pas être poussés dans le dépôt principal.

Fichier d'En-tête (binary_trees.h) : Doit inclure les prototypes de toutes les fonctions du projet et être protégé contre les inclusions multiples (include guarded).

# 📝 Structures de Données Utilisées
Pour ce projet, les structures et types suivants sont utilisés.

Arbre Binaire de Base
```C

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
Types pour les arbres spécialisés (BST, AVL, etc.)
```
```
C

typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

# 🚀 Tâches Réalisées
Ce projet comprend de nombreuses tâches, chacune testant un aspect différent de la manipulation des arbres binaires.

0. New node
Objectif : Créer un nouveau nœud d'arbre binaire.

Prototype : binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

Fichier : [0-binary_tree_node.c](https://github.com/Mathieu7483/holbertonschool-binary_trees/blob/main/0-binary_tree_node.c)

1. Insert left
Objectif : Insérer un nœud en tant qu'enfant gauche d'un nœud parent.

Prototype : binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

Fichier : [1-binary_tree_insert_left.c](https://github.com/Mathieu7483/holbertonschool-binary_trees/blob/main/1-binary_tree_insert_left.c)

2. Insert right
Objectif : Insérer un nœud en tant qu'enfant droit d'un nœud parent.

Prototype : binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

Fichier : [2-binary_tree_insert_right.c](https://github.com/Mathieu7483/holbertonschool-binary_trees/blob/main/2-binary_tree_insert_right.c)

3. Delete
Objectif : Supprimer un arbre binaire entier.

Prototype : void binary_tree_delete(binary_tree_t *tree);

Fichier : [3-binary_tree_delete.c](https://github.com/Mathieu7483/holbertonschool-binary_trees/blob/main/3-binary_tree_delete.c)

4. Is leaf
Objectif : Vérifier si un nœud est une feuille.

Prototype : int binary_tree_is_leaf(const binary_tree_t *node);

Fichier : [4-binary_tree_is_leaf.c](https://github.com/Mathieu7483/holbertonschool-binary_trees/blob/main/4-binary_tree_is_leaf.c)

5. Is root
Objectif : Vérifier si un nœud est la racine d'un arbre.

Prototype : int binary_tree_is_root(const binary_tree_t *node);

Fichier : [5-binary_tree_is_root.c](https://github.com/Mathieu7483/holbertonschool-binary_trees/blob/main/5-binary_tree_is_root.c)

6. Pre-order traversal
Objectif : Parcourir un arbre en utilisant la méthode pré-ordre.

Prototype : void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

Fichier : [6-binary_tree_preorder.c](https://github.com/Mathieu7483/holbertonschool-binary_trees/blob/main/6-binary_tree_preorder.c)

7. In-order traversal
Objectif : Parcourir un arbre en utilisant la méthode in-ordre.

Prototype : void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

Fichier : [7-binary_tree_inorder.c](https://github.com/Mathieu7483/holbertonschool-binary_trees/blob/main/7-binary_tree_inorder.c)

8. Post-order traversal
Objectif : Parcourir un arbre en utilisant la méthode post-ordre.

Prototype : void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

Fichier : [8-binary_tree_postorder.c](https://github.com/Mathieu7483/holbertonschool-binary_trees/blob/main/8-binary_tree_postorder.c)

9. Height
Objectif : Mesurer la hauteur d'un arbre binaire.

Prototype : size_t binary_tree_height(const binary_tree_t *tree);

Fichier : [9-binary_tree_height.c](https://github.com/Mathieu7483/holbertonschool-binary_trees/blob/main/9-binary_tree_height.c)

10. Depth
Objectif : Mesurer la profondeur d'un nœud.

Prototype : size_t binary_tree_depth(const binary_tree_t *tree);

Fichier : [10-binary_tree_depth.c](https://github.com/Mathieu7483/holbertonschool-binary_trees/blob/main/10-binary_tree_depth.c)

11. Size
Objectif : Mesurer la taille (nombre total de nœuds) d'un arbre binaire.

Prototype : size_t binary_tree_size(const binary_tree_t *tree);

Fichier : [11-binary_tree_size.c](https://github.com/Mathieu7483/holbertonschool-binary_trees/blob/main/11-binary_tree_size.c)

12. Leaves
Objectif : Compter le nombre de feuilles dans un arbre binaire.

Prototype : size_t binary_tree_leaves(const binary_tree_t *tree);

Fichier : [12-binary_tree_leaves.c](https://github.com/Mathieu7483/holbertonschool-binary_trees/blob/main/12-binary_tree_leaves.c)

13. Nodes
Objectif : Compter le nombre de nœuds avec au moins un enfant.

Prototype : size_t binary_tree_nodes(const binary_tree_t *tree);

Fichier : [13-binary_tree_nodes.c](https://github.com/Mathieu7483/holbertonschool-binary_trees/blob/main/13-binary_tree_nodes.c)

14. Balance factor
Objectif : Mesurer le facteur d'équilibre d'un arbre binaire.

Prototype : int binary_tree_balance(const binary_tree_t *tree);

Fichier : [14-binary_tree_balance.c](https://github.com/Mathieu7483/holbertonschool-binary_trees/blob/main/14-binary_tree_balance.c)

15. Is full
Objectif : Vérifier si un arbre binaire est plein.

Prototype : int binary_tree_is_full(const binary_tree_t *tree);

Fichier : [15-binary_tree_is_full.c](https://github.com/Mathieu7483/holbertonschool-binary_trees/blob/main/15-binary_tree_is_full.c)

16. Is perfect
Objectif : Vérifier si un arbre binaire est parfait.

Prototype : int binary_tree_is_perfect(const binary_tree_t *tree);

Fichier : [16-binary_tree_is_perfect.c](https://github.com/Mathieu7483/holbertonschool-binary_trees/blob/main/16-binary_tree_is_perfect.c)

17. Sibling
Objectif : Trouver le frère ou la sœur d'un nœud.

Prototype : binary_tree_t *binary_tree_sibling(binary_tree_t *node);

Fichier : [17-binary_tree_sibling.c](https://github.com/Mathieu7483/holbertonschool-binary_trees/blob/main/17-binary_tree_sibling.c)

18. Uncle
Objectif : Trouver l'oncle d'un nœud.

Prototype : binary_tree_t *binary_tree_uncle(binary_tree_t *node);

Fichier : [18-binary_tree_uncle.c](https://github.com/Mathieu7483/holbertonschool-binary_trees/blob/main/18-binary_tree_uncle.c)

# ⚙️ Compilation
Les fichiers de ce projet seront compilés à l'aide de gcc avec les options suivantes :

```Bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o my_file_io_program
```

Verification des fuites de mémoire à l'aide de la commande
```Bash
valgrind --leak-check=full ./mon_programme
```

# ✍️ Auteur
[Mathieu GODALIER](https://github.com/Mathieu7483) - Elève en programmation à la Holberton School
