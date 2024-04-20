/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcantell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:02:54 by mcantell          #+#    #+#             */
/*   Updated: 2024/04/20 12:49:33 by mcantell         ###   ########.fr       */
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
void	ft_swap(t_stack **str, char s, int flag);
void	ft_rotate(t_stack **str, char s, int flag);
void	double_all(t_stack	**stra, t_stack **strb, int flag);
t_stack	*ft_lstlast(t_stack *str);
void	reverse_r(t_stack **str, char s, int flag);
void	ft_push(t_stack **stra, t_stack **strb, char s);
int		ft_check_sort(t_stack *str);
void	ft_lst_arg(char **av, t_stack **str);
t_stack	*quote(char **av);
t_stack	*arg_parse(int ac, char **av);
int		min(t_stack *str);
int		max(t_stack *str);
int		ft_index(t_stack *str, int num);
int		find_in_b(t_stack *strb, int nbr);
int		find_in_a(t_stack *stra, int nbr);
int		case_rarb(t_stack *stra, t_stack *strb, int c);
int		case_rrarrb(t_stack *stra, t_stack *strb, int c);
int		case_rrarb(t_stack *stra, t_stack *strb, int c);
int		case_rarrb(t_stack *stra, t_stack *strb, int c);
int		apply_rarb(t_stack **a, t_stack **b, int c, char s);
int		apply_rrarb(t_stack **stra, t_stack **strb, char c, int i);
int		apply_rarrb(t_stack **stra, t_stack **strb, char c, int i);
int		case_rarb_1(t_stack *stra, t_stack *strb, int c);
int		case_rrarrb_1(t_stack *stra, t_stack *strb, int c);
int		case_rrarb_1(t_stack *stra, t_stack *strb, int c);
int		case_rarrb_1(t_stack *stra, t_stack *strb, int c);
int		rotate_type_ba(t_stack *stra, t_stack *strb);
int		rotate_type_ab(t_stack *stra, t_stack *strb);
void	sort_three(t_stack **stra);
void	sort_b_till_3(t_stack **stra, t_stack **strb);
t_stack	**sort_a(t_stack **stra, t_stack **strb);
t_stack	*sort_b(t_stack **stra);
void	sort(t_stack **stra);
t_stack	*ft_process(int ac, char **av);
t_stack	*ft_process_arg(char *arg, t_stack	*str);
void	free_stack(t_stack **stack);
char	*ft_strchr(const char *s, int c);
int		apply_rrarrb(t_stack **stra, t_stack **strb, char s, int c);
#endif