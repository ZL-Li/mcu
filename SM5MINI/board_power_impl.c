#include <mp5475.h>
#include <chip.h>

int pmic_channel_a_on(void)
{
	return mp5475_buck_on(0);
}

void pmic_channel_a_off(void)
{
	mp5475_buck_off(0);
}

int pmic_channel_d_on(void)
{
	return mp5475_buck_on(3);
}

void pmic_channel_d_off(void)
{
	mp5475_buck_off(3);
}

int pmic_channel_b_on(void)
{
	return mp5475_buck_on(1);
}

void pmic_channel_b_off(void)
{
	mp5475_buck_off(1);
}

int pmic_channel_c_on(void)
{
	return mp5475_buck_on(2);
}

void pmic_channel_c_off(void)
{
	mp5475_buck_off(2);
}

int sys_rst_deassert_on(void)
{
	chip_enable();
	return 0;
}

void sys_rst_deassert_off(void)
{
}

int sys_rst_assert_on(void)
{
	chip_disable();
	return 0;
}

void sys_rst_assert_off(void)
{
	/* reset chip firstly when power off */
	chip_disable();
}