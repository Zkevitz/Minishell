/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheck <rheck@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:56:51 by rheck             #+#    #+#             */
/*   Updated: 2024/03/01 12:00:33 by rheck            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../../inc/mini.h>

int	my_pwd(t_main *tools, t_cmd *simple_cmd)
{
	(void)simple_cmd;
	ft_putendl_fd(tools->pwd, 1);
	return (0);
}
