from kivy.app import App
from kivy.uix.boxlayout import BoxLayout
from kivy.uix.label import Label


class ITInformationApp(App):
    def build(self):
        layout = BoxLayout(orientation='vertical', padding=16)
        title_label = Label(text='Information about IT', font_size=24, bold=True, halign='center')
        info_label = Label(text='IT stands for Information Technology. It refers to the use, development, and management of computer-based systems to process, transmit, and store information. IT encompasses various fields such as software development, networking, cybersecurity, database management, and more.')

        layout.add_widget(title_label)
        layout.add_widget(info_label)

        return layout


if __name__ == '__main__':
    ITInformationApp().run()
