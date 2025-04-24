using System;

namespace Lab5
{
    class Program
    {
        static void ShowMenu()
        {
            Console.WriteLine("\n=== МЕНЮ ===");
            Console.WriteLine("1. Додати рядок");
            Console.WriteLine("2. Показати всі рядки");
            Console.WriteLine("3. Видалити рядок");
            Console.WriteLine("4. Замінити рядок");
            Console.WriteLine("5. Порахувати кількість цифр");
            Console.WriteLine("6. Очистити всі рядки");
            Console.WriteLine("0. Вихід");
            Console.Write("Ваш вибір: ");
        }

        static void Main()
        {
            Console.OutputEncoding = System.Text.Encoding.UTF8;
            TextContainer container = new TextContainer();
            int choice;

            do
            {
                ShowMenu();
                if (!int.TryParse(Console.ReadLine(), out choice)) continue;

                if (choice == 1)
                {
                    Console.Write("Введіть новий рядок: ");
                    string text = Console.ReadLine();
                    container.AddRow(new TextRow(text));
                }
                else if (choice == 2)
                {
                    Console.WriteLine("\n--- Всі рядки ---");
                    for (int i = 0; i < container.GetRowCount(); i++)
                        Console.WriteLine($"{i + 1}: {container.GetRow(i).GetText()}");
                }
                else if (choice == 3)
                {
                    Console.Write("Номер рядка для видалення: ");
                    if (int.TryParse(Console.ReadLine(), out int index))
                        container.RemoveRow(index - 1);
                }
                else if (choice == 4)
                {
                    Console.Write("Номер рядка для заміни: ");
                    if (int.TryParse(Console.ReadLine(), out int index))
                    {
                        Console.Write("Новий текст: ");
                        string newText = Console.ReadLine();
                        container.ReplaceRow(index - 1, new TextRow(newText));
                    }
                }
                else if (choice == 5)
                {
                    Console.WriteLine("Загальна кількість цифр: " + container.TotalDigits());
                }
                else if (choice == 6)
                {
                    container.Clear();
                    Console.WriteLine("Очищено всі рядки.");
                }
            } while (choice != 0);
        }
    }
}
