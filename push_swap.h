/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:02:54 by mcantell          #+#    #+#             */
/*   Updated: 2024/04/12 06:05:52 by mcantell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int				num;
	int				index;
	struct s_stack	*prev;
	struct s_stack	*next;
}		t_stack;
char	**ft_split(char const *s, char c);
int		ft_atoi(char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t s);
int		ft_limit(char **argv);
int		ft_number(char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_free(char **str);
t_stack	*ft_new(int i);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
int		ft_lstsize(t_stack *lst);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	art1(void);
void	art2(void);
int		ft_strlen(char *str);
void	check_tot(int ac, char **av);
void	art3(void);
t_stack	*ft_take(t_stack *a, char **av, int ac);
void	ft_swap(t_stack *str, char s, int flag);
void	ft_rotate(t_stack **str, char s, int flag);
#endif