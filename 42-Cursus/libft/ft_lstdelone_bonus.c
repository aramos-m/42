/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos-m <aramos-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 21:09:36 by aramos-m          #+#    #+#             */
/*   Updated: 2024/10/01 21:53:27 by aramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/*int	main(void)
{
	t_list	*a;
	char	*cont;

	cont = malloc(4);
	cont[0] = 'A';
	cont[1] = 'n';
	cont[2] = 'a';
	cont[3] = 0;
	a = ft_lstnew(cont);
	printf("%s\n", cont);
	ft_lstdelone(a, free);
	printf("%s\n", cont);
}*/
