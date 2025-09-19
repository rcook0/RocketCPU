/* yc_cpufreq.c — skeleton cpufreq driver for YourCorp SoC */
#include <linux/module.h>
#include <linux/cpufreq.h>
#include <linux/of.h>

static int yc_cpufreq_target(struct cpufreq_policy *policy,
                             unsigned int index)
{
    unsigned int freq = policy->freq_table[index].frequency;
    pr_info("yc_cpufreq: set CPU %d to %u kHz\n", policy->cpu, freq);
    /* TODO: call into OpenSBI vendor ext (YCFR) to actually set freq */
    return 0;
}

static int yc_cpufreq_init(struct cpufreq_policy *policy)
{
    static struct cpufreq_frequency_table freq_table[] = {
        {0, 1200000}, {1, 1400000}, {2, 1600000}, {3, 1800000},
        {4, 2000000}, {5, 2200000}, {6, 2400000}, {CPUFREQ_TABLE_END}
    };
    policy->freq_table = freq_table;
    policy->cpuinfo.transition_latency = 200000; /* 200 us */
    return 0;
}

static struct cpufreq_driver yc_cpufreq_driver = {
    .flags = CPUFREQ_STICKY,
    .verify = cpufreq_generic_frequency_table_verify,
    .target_index = yc_cpufreq_target,
    .get = cpufreq_generic_get,
    .init = yc_cpufreq_init,
    .name = "yc_cpufreq",
};

static int __init yc_cpufreq_module_init(void)
{
    return cpufreq_register_driver(&yc_cpufreq_driver);
}

static void __exit yc_cpufreq_module_exit(void)
{
    cpufreq_unregister_driver(&yc_cpufreq_driver);
}

module_init(yc_cpufreq_module_init);
module_exit(yc_cpufreq_module_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("YourCorp cpufreq driver (skeleton)");
MODULE_AUTHOR("YourCorp");
