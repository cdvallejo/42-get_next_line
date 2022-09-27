/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvallejo <cvallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 12:56:29 by cvallejo          #+#    #+#             */
/*   Updated: 2022/05/17 10:58:15 by cvallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

char	*ft_read_and_buff(int fd, char *text_asked);
char	*ft_next_text_asked(char *text_asked);
char	*ft_get_line(char *all_txt);
char	*get_next_line(int fd);
char	*ft_strchr(char *s, int c);
void	*ft_no_text_asked(char *buffer_text, char *text_asked);
size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);

#endif
