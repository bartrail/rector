<?php

namespace Rector\PHPOffice\Tests\Rector\MethodCall\RemoveSetTempDirOnExcelWriterRector\Fixture;

final class SomeClass
{
    public function run(): void
    {
        $writer = new \PHPExcel_Writer_Excel5;
        $writer->setTempDir();
    }
}

?>
-----
<?php

namespace Rector\PHPOffice\Tests\Rector\MethodCall\RemoveSetTempDirOnExcelWriterRector\Fixture;

final class SomeClass
{
    public function run(): void
    {
        $writer = new \PHPExcel_Writer_Excel5;
    }
}

?>
