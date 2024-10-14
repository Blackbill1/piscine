# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/16 21:36:04 by tle-dref          #+#    #+#              #
#    Updated: 2024/07/16 21:36:13 by tle-dref         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Répertoire contenant les fichiers sources
SRC_DIR="."
# Répertoire de sortie pour les fichiers objets et la bibliothèque
BUILD_DIR="."
# Nom de la bibliothèque
LIB_NAME="libft.a"
# Include directory for header files

# Compilation des fichiers sources en fichiers objets
for src_file in $(find $SRC_DIR -type f -name "*.c"); do
    obj_file="$BUILD_DIR/$(basename "$src_file" .c).o"
    cc -Wall -Wextra -Werror -c "$src_file" -o "$obj_file" 
done

# Création de la bibliothèque statique
ar rcs "$BUILD_DIR/$LIB_NAME" $BUILD_DIR/*.o

# Nettoyage des fichiers objets
rm $BUILD_DIR/*.o
