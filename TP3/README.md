#﻿NF16 - TP 3 – Listes chaînées ![](Aspose.Words.dfb0aaf5-e3be-4aa9-a5b1-5b21914b21b4.001.png)

**Introduction** 

Nous proposons d’écrire un programme permettant la gestion d’un magasin et des rayons qui le constituent : un magasin est une entité contenant plusieurs rayons, et chaque rayon contient plusieurs produits. 

L'ensemble des données et des liens entre ces données seront représentées sous forme de listes simplement chaînées. 

1. **Structures** 
1. Créer une structure **Produit** (et le type correspondant **T\_Produit**) ayant les champs suivants : 
- **designation** *de type chaine de caractères* 
- **prix** *de type nombre réel* 
- **quantite\_en\_stock** *de type entier* 
- **suivant** *de type pointeur vers une structure Produit* 
2. Créer une structure **Rayon** (et le type correspondant **T\_Rayon**) ayant les champs suivants : 
- **nom\_rayon** *de type chaine de caractères* 
- **liste\_produits** *de type pointeur vers une structure Produit* 
- **suivant** *de type pointeur vers une structure Rayon* 
3. Créer une structure **Magasin** (et le type correspondant **T\_Magasin**) ayant les champs suivants : 
- **nom** *de type chaine de caractères* 
- **liste\_rayons** *de type pointeur vers une structure Rayon* 
2. **Fonctions requises** 
1. Création et initialisation des structures : 

**T\_Produit \*creerProduit(char \*designation, float prix, int quantite) T\_Rayon \*creerRayon(char \*nom)** 

**T\_Magasin \*creerMagasin(char \*nom)** 

2. Ajout d'un rayon dans un magasin : 

**int ajouterRayon(T\_Magasin \*magasin, char \*nomRayon)** 

*renvoie 1 si l'ajout s'est bien passé, 0 sinon; l'ajout se fait en respectant le tri par ordre alphabétique sur le nom du rayon; on ne doit pas autoriser l'utilisateur à ajouter deux fois le même nom de rayon* 

3. Ajout d'un produit dans un rayon : 

**int ajouterProduit(T\_Rayon \*rayon,char \*designation, float prix, int quantite)** 

*renvoie 1 si l'ajout s'est bien passé, 0 sinon; l'ajout se fait en respectant le tri par ordre croissant du prix du produit; on ne doit pas autoriser l'utilisateur à ajouter deux fois le même produit dans un rayon* 

4. Affichage de tous les rayons d'un magasin : 

**void afficherMagasin(T\_Magasin \*magasin)** 

*L'affichage se fait sous forme de liste triée sur le nom des rayons* 



|Nom |Nombre de produits |
| - | - |
|Boissons |15 |
|Lessives |7 |
|Yaourts |11 |

5. Affichage de tous les produits d'un rayon : 

**void afficherRayon(T\_Rayon \*rayon)** 

*L'affichage se fait sous forme de liste triée sur le prix  du produit* 



|Designation |Prix |Quantité en stock |
| - | - | - |
|Lavazza  |3\.50 |100 |
|Carte-Noire |4\.20 |80 |
|Grand-Mère |4\.80 |55 |

6. Suppression d'un produit dans un rayon : 

**int supprimerProduit(T\_Rayon \*rayon, char\* designation\_produit)** 

*renvoie 1 si le retrait s'est bien passé, 0 sinon; on veillera à libérer la mémoire précédemment allouée* 

7. Suppression d'un rayon et de tous les produits qu'il contient :  

**int supprimerRayon(T\_Magasin \*magasin, char \*nom\_rayon)** 

*renvoie 1 si la suppression s'est bien passée, 0 sinon; on veillera à libérer la mémoire précédemment allouée* 

8. Recherche des produits se situant dans une fourchette de prix entrée par l'utilisateur : 

**void rechercheProduits(T\_Magasin \*magasin, float prix\_min, float prix\_max)** 

*L'affichage se fait sous forme de liste triée par ordre croissant de prix du produit.*  



|Marque |Prix |Quantité en stock |Rayon |
| - | - | - | - |
|Carte Noire |2\.50 |100 |Café |
|Nutella  |3\.10 |250 |Petit Déjeuner  |
|Danone |3\.50 |80 |Yaourts |

*Vous expliquerez dans votre rapport votre choix de créer des structures spécifiques ou d'utiliser les structures déjà définies pour cette fonction. **Vous veillerez à optimiser cette fonction de manière à effectuer le minimum d'opérations possible.*** 

P23 – NF16 – TP 2 Listes Chainées   2 ![ref1]

9. Fusionner deux rayons 

**void fusionnerRayons(T\_Magasin \*magasin)** 

*L'utilisateur choisit deux rayons parmi ceux du magasin. On fusionne alors ces deux rayons en un seul dont le nom sera au choix de l'utilisateur et qui contiendra les produits des deux rayons fusionnés triés par ordre croissant de prix. **Vous veillerez à optimiser cette fonction de manière à effectuer le minimum d'opérations possible.*** 

3. **Programme Principal :** 

Programmer un menu contenant les options suivantes : 

1. Créer un magasin 
1. Ajouter un rayon au magasin 
1. Ajouter un produit dans un rayon 
1. Afficher les rayons du magasin 
1. Afficher les produits d'un rayon 
1. Supprimer un produit 
1. Supprimer un rayon 
1. Rechercher un produit par prix 
1. Quitter 

**Consignes générales :** 

- Sources 

L’organisation de votre projet sera la suivante:  

- Fichier d’entête **tp3.h** contenant les définitions de types, de structures, de constantes et les prototypes de vos fonctions 
- Fichier source **tp3.c** contenant les définitions de vos fonctions 
- Fichier source **main.c** contenant le programme principal 
- Rapport 

Votre rapport de quatre pages maximum contiendra : 

- La liste des structures et des fonctions supplémentaires que vous aurez choisi d'implémenter et les raisons de ces choix 
- Un exposé succinct de la complexité de chacune des fonctions implémentées 

**Votre rapport** et **vos trois fichiers** feront l'objet d'une remise de devoir sur **Moodle** dans l'espace qui sera ouvert à cet effet pendant une semaine suivant votre démonstration au chargé de TP (un seul rendu de devoir par binôme). 
P23 – NF16 – TP 3 Listes Chainées   3 ![ref1]

[ref1]: Aspose.Words.dfb0aaf5-e3be-4aa9-a5b1-5b21914b21b4.002.png
