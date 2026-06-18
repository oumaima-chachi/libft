# *This project has been created as part of the 42 curriculum by ochachi.*

# Libft

## Description

Libft est la toute première bibliothèque personnelle développée dans le cursus 42.

L'objectif du projet est de recréer plusieurs fonctions de la bibliothèque standard du langage C afin de mieux comprendre leur fonctionnement interne et leur utilisation. Cette bibliothèque constitue une base réutilisable pour les futurs projets du cursus.

Le projet est divisé en trois parties :

* Reproduction de fonctions de la libc.
* Développement de fonctions utilitaires supplémentaires.
* Implémentation d'une liste chaînée simple.

Toutes les fonctions sont regroupées dans une bibliothèque statique nommée `libft.a`.

---

# Features

## Part 1 – Libc Functions

### Character checks

* ft_isalpha
* ft_isdigit
* ft_isalnum
* ft_isascii
* ft_isprint

### Character conversion

* ft_toupper
* ft_tolower

### Memory functions

* ft_memset
* ft_bzero
* ft_memcpy
* ft_memmove
* ft_memchr
* ft_memcmp
* ft_calloc

### String functions

* ft_strlen
* ft_strlcpy
* ft_strlcat
* ft_strchr
* ft_strrchr
* ft_strncmp
* ft_strnstr
* ft_strdup

### Conversion

* ft_atoi

---

## Part 2 – Additional Functions

### String manipulation

* ft_substr
* ft_strjoin
* ft_strtrim
* ft_split
* ft_strmapi
* ft_striteri

### Conversion

* ft_itoa

### File descriptor output

* ft_putchar_fd
* ft_putstr_fd
* ft_putendl_fd
* ft_putnbr_fd

---

## Part 3 – Linked List Functions

La structure utilisée :

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

Fonctions implémentées :

* ft_lstnew
* ft_lstadd_front
* ft_lstsize
* ft_lstlast
* ft_lstadd_back
* ft_lstdelone
* ft_lstclear
* ft_lstiter
* ft_lstmap

---

# Library Design

La bibliothèque est organisée selon trois catégories principales :

### 1. Fonctions libc

Ces fonctions reproduisent fidèlement le comportement des fonctions standards décrites dans les man pages.

### 2. Fonctions utilitaires

Elles facilitent la manipulation des chaînes de caractères, des conversions et des affichages sur des file descriptors.

### 3. Gestion des listes chaînées

Cette partie introduit les structures de données dynamiques et fournit les opérations fondamentales nécessaires pour manipuler des listes simplement chaînées.

Cette organisation permet de disposer d'une bibliothèque cohérente et facilement réutilisable dans les projets suivants du cursus.

---

# Instructions

## Compilation

Compiler la bibliothèque :

```bash
make
```

Nettoyer les fichiers objets :

```bash
make clean
```

Supprimer tous les fichiers générés :

```bash
make fclean
```

Recompiler entièrement :

```bash
make re
```

---

# Example Usage

```c
#include "libft.h"

int main(void)
{
	ft_putendl_fd("Hello Libft!", 1);
	return (0);
}
```

Compilation :

```bash
cc main.c libft.a
```

---

# Technical Choices

## Respect des man pages

Toutes les fonctions de la première partie reproduisent le comportement attendu des fonctions originales de la libc.

## Gestion de la mémoire

Les fonctions retournant des allocations dynamiques utilisent `malloc()` et la responsabilité de libération de la mémoire est laissée à l'utilisateur.

## Fonctions statiques

Lorsque des fonctions auxiliaires étaient nécessaires, elles ont été déclarées `static` afin de limiter leur portée au fichier concerné.

## Bibliothèque statique

Le projet produit une bibliothèque statique (`libft.a`) créée avec la commande `ar`, conformément aux exigences du sujet.

---

# Resources

## Documentation

* The Linux Manual Pages (man)
* The Open Group Base Specifications
* Beej's Guide to C Programming
* GNU C Library Documentation
* 42 Intranet

## AI Usage

L'intelligence artificielle a été utilisée uniquement comme outil d'assistance pédagogique :

* Compréhension de certaines fonctions de la libc.
* Vérification de concepts liés aux pointeurs et à la gestion mémoire.
* Recherche d'explications sur les listes chaînées.

Aucun code généré automatiquement n'a été copié directement dans le projet sans être étudié, testé et compris avant son intégration.

---

# Learning Outcomes

Grâce à ce projet, j'ai appris :

* La manipulation avancée des pointeurs.
* La gestion dynamique de la mémoire.
* Le fonctionnement interne de nombreuses fonctions standards du C.
* La création et l'utilisation d'une bibliothèque statique.
* Les bases des structures de données chaînées.
* L'importance de l'organisation et de la réutilisation du code.

---
