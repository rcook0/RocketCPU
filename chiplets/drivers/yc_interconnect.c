/* yc_interconnect.c — skeleton Linux driver for YourCorp SoC interconnect manager */
#include <linux/module.h>
#include <linux/platform_device.h>
#include <linux/of.h>
#include <linux/io.h>

#define DRV_NAME "yc_interconnect"

struct yc_interconnect_dev {
    void __iomem *regs;
};

static int yc_interconnect_probe(struct platform_device *pdev)
{
    struct yc_interconnect_dev *idev;
    struct resource *res;

    idev = devm_kzalloc(&pdev->dev, sizeof(*idev), GFP_KERNEL);
    if (!idev)
        return -ENOMEM;

    res = platform_get_resource(pdev, IORESOURCE_MEM, 0);
    idev->regs = devm_ioremap_resource(&pdev->dev, res);
    if (IS_ERR(idev->regs))
        return PTR_ERR(idev->regs);

    dev_info(&pdev->dev, "YourCorp Interconnect Manager probed\n");
    return 0;
}

static const struct of_device_id yc_interconnect_of_match[] = {
    { .compatible = "yourcorp,interconnect", },
    { }
};
MODULE_DEVICE_TABLE(of, yc_interconnect_of_match);

static struct platform_driver yc_interconnect_driver = {
    .driver = {
        .name = DRV_NAME,
        .of_match_table = yc_interconnect_of_match,
    },
    .probe = yc_interconnect_probe,
};
module_platform_driver(yc_interconnect_driver);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("YourCorp Interconnect Manager driver (skeleton)");
MODULE_AUTHOR("YourCorp");
