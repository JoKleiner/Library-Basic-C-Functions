/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joklein <joklein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:24:08 by joklein           #+#    #+#             */
/*   Updated: 2025/01/22 15:44:09 by joklein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		free(lst);
		*lst = temp;
	}
	free(*lst);
	*lst = NULL;
}
