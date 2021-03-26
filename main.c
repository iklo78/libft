/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misaev <misaev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 13:57:22 by misaev            #+#    #+#             */
/*   Updated: 2021/03/26 17:42:07 by misaev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>


int main() {

    const char * original = "Bonjour les copains";
    const char * new = "o";

    // On duplique la chaîne de caractères initiale.
    char * copy = ft_strtrim(original, new);

    // On affiche la chaîne finale
    printf( "%s\n", copy );

    // Sans oublier de libérer l'espace mémoire au final.
    free( copy );

    return EXIT_SUCCESS;
}
