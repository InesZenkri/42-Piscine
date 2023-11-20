int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int res_d;
	unsigned int res_s;

	i = ft_strlen(dest);
	j = 0;
	res_d = ft_strlen(dest);
	res_s = ft_strlen(src);
	if (size < 1)
		return (res_s + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < res_d)
		return (res_s + size);
	else
		return (res_d + res_s);
}
//second way with pointers :
int ft_strlen(const char *str)
{
    int length;

    length = 0;
    while (*str != '\0')
    {
        length++;
        str++;
    }
    return (length);
}

unsigned int ft_strlcat(char *dest, const char *src, unsigned int size)
{
    unsigned int dest_len;
    unsigned int src_len;
    unsigned int total_len;
    unsigned int copy_len; 

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    total_len = dest_len + src_len;
    copy_len = size - 1 - dest_len;
    if (size <= dest_len)
        return (size + src_len);
    while (*dest != '\0')
        dest++;
    while (*src != '\0' && copy_len > 0)
    {
        *dest = *src;
        dest++;
        src++;
        copy_len--;
    }
    *dest = '\0'; 

    return (total_len);
}


