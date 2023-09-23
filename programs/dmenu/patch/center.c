static int
max_textw(void)
{
	int len = TEXTW("<")+TEXTW(">");
	for (struct item *item = items; item && item->text; item++)
		len += TEXTW(item->text); //MAX(TEXTW(item->text), len);
	return len;
}
