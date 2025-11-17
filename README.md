# asm-lib

**asm-lib** est une petite bibliothèque expérimentale écrite en **C** avec de l’inline assembly (et parfois de l’assembleur séparé).  
Le but du projet est de recréer plusieurs fonctions bas niveau pour mieux comprendre le fonctionnement de l’architecture **x86_64**, l’optimisation et l’interaction directe avec le matériel.

---

## 🎯 Objectif

- Apprendre et pratiquer l’inline assembly  
- Réimplémenter des fonctions simples en version low-level  
- Explorer les registres, instructions CPU et conventions d’appel  
- Comparer performances et comportements avec leurs équivalents en C  

---

## 📂 Contenu

Le projet inclura progressivement :

- Fonctions utilisant **inline asm**  
- Fonctions utilisant les **syscalls**  
- Petits utilitaires optimisés (rand, memcpy, strlen…)  

---

## 🛠️ Build

```sh
make
