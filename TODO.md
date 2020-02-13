
# Questions

- Quels sont les chemins d'attaque possibles sur la signature d'un système embarqué?
- A quoi sert la chaine de confiance? Pourquoi est-elle nécessaire?
- Décrire la méthode pour aborder la sécurité sur un produit embarqué. Pourquoi établir un modèle d'attaquant est-il important?
- Trouver un moyen rapide de faire du debug embarqué (par exemple sur cible ARM)? Expliquer les avantages
- Lister les catégories de bug possibles et comment les exploiter et les défendre
- Quelles idées pour améliorer la sécurité en embarqué? (IA, Anti-debug, Obfuscation, Crypto ...) Choisissez une idée, chercher si elle existe et développer en quelques phrases quel avantage elle apporte et ses limites


# TD1: \[Reverse engineering\]

Comprendre le patching de binaire

## Finir crack emily (version avec soluce)

https://archive.emily.st/2015/01/27/reverse-engineering/

// Expliquer avec vos propres mots basé sur l'[exemple suivant](https://github.com/DavidJacobson/EasyCTF-2015-writeup/blob/master/binary_exploitation.md#buffering---80-pts)

## Prendre un binaire de votre choix et changer son comportement

Expliquer pourquoi modifier le comportement d'un binaire peut être intéressant pour un attaquant

Les outils pour cette partie sont à votre choix

Des outils possibles:
- Ida
- Cutter / Radare2
- Ghidra

# TD2 \[Reverse engineering\]

Le pingouin dans la botte de foin

## Binwalk

install et regarder l'aide

http://www.devttys0.com/2011/05/reverse-engineering-firmware-linksys-wag120n/

https://bootlin.com/blog/qemu-arm-directfb-demo/

utiliser binwalk sur vmlinuz-qemu-arm-2.6.20

Expliquer ce que vous voyez. Qu'est ce qui peut etre intéressant d'un point de vue sécurité?

Retrouvez le pingouin de la démo qemu.

Essayez de patcher le fichier pour remplacer le pingouin par une autre image. Que ce passe-t-il?     

# TD3 \[Exploit\]

Faire un exemple d'exploitation de heap buffer overflow avec le code correspondant

ou

Faire un exemple d'exploitation de double free avec le code correspondant

Comment peut-on s'en protéger?

# Choisissez au moins un des TDs suivants (ou plusieurs) (ou tous)

# TD4 \[Fuzzing\]

Ecrivez un fuzzer (script) sur la base du TD1 qui va modifier bit par bit le binaire jusqu'à obtenir un OK avec un mauvais mot de passe

Faire sur le range de la fonction is_valid si trop lent

# TD5 \[Exploit\]

Montrer ce qu'il est possible de faire avec la vulnérabilité [DirtyCow](https://github.com/dirtycow/dirtycow.github.io/wiki/PoCs)

# TD6 \[Side channel\]

Créer un POC montrant une timing attack sur un password par exemple

En quoi les timings attacks peuvent poser des problèmes en embarqué?

# TD7 \[CTF\]

Faire un writeup des premiers levels (3) de [Microcorruption](https://microcorruption.com/login)

# TD8 \[Compilation\]

Montrer l'effet des options de compilation sur le code

Compilez les différentes formes de code (if/switch, for/while) avec des options de compilation différentes -O2 -O3

En quoi ce peut être problématique pour la sécurité?

Comment est ce que je peux modifier l'assembleur des formes de code (if/switch, for/while) pour obtenir un comportement intéressant pour l'attaquant. Expliquez le gain.

# TD9 \[Crypto\]

Créer une signature d'un fichier avec OpenSSL

https://stackoverflow.com/questions/10782826/digital-signature-for-a-file-using-openssl

En quoi la signature peut protéger dans un contexte embarqué?

Comment protéger l'update d'un firmware?

# TD10 \[Tools\]

Jouer avec les outils suivants:
- [z3](https://yurichev.com/writings/SAT_SMT_by_example.pdf)
- [angr](https://docs.angr.io/examples)
- [afl](https://www.evilsocket.net/2015/04/30/fuzzing-with-afl-fuzz-a-practical-example-afl-vs-binutils/)

Comment est ce que je peux utiliser ces outils en tant que défenseur?
